/*
 * Program Name : string reverse.c
 * Author       : Sonali Patil
 * Date         : 2026-07-18
 * Description  : Reads text from the user, removes trailing newlines,
 *                and prints each line in reverse order until end of input.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/*
 * read_line: Read an entire line from the given input stream.
 * Returns a heap-allocated string containing the line, including the newline
 * character if one was read. The caller must free the returned buffer.
 * Returns NULL when end-of-file is reached or memory allocation fails.
 * The line length is returned through out_length when out_length is not NULL.
 */
static char *read_line(FILE *stream, size_t *out_length)
{
    size_t capacity = 128; /* initial buffer capacity */
    size_t length = 0;
    char *buffer = malloc(capacity);
    if (buffer == NULL)
        return NULL;

    int ch;
    while ((ch = fgetc(stream)) != EOF)
    {
        /* Grow the buffer if needed to accommodate more characters. */
        if (length + 1 >= capacity)
        {
            size_t new_capacity = capacity * 2;
            char *new_buffer = realloc(buffer, new_capacity);
            if (new_buffer == NULL)
            {
                free(buffer);
                return NULL;
            }
            buffer = new_buffer;
            capacity = new_capacity;
        }

        buffer[length++] = (char)ch;
        if (ch == '\n')
            break; /* stop at end of line */
    }

    if (length == 0 && ch == EOF)
    {
        /* No data was read before EOF, so return NULL. */
        free(buffer);
        return NULL;
    }

    buffer[length] = '\0'; /* null-terminate the string */
    if (out_length)
        *out_length = length;
    return buffer;
}

static void reverse_in_place(char *str, size_t length)
{
    size_t i = 0;
    while (i < length / 2)
    {
        char tmp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = tmp;
        i++;
    }
}

static bool test_reverse(const char *input, const char *expected)
{
    size_t length = strlen(input);
    char *buffer = malloc(length + 1);
    if (buffer == NULL)
        return false;

    memcpy(buffer, input, length + 1);
    reverse_in_place(buffer, length);
    bool result = strcmp(buffer, expected) == 0;
    free(buffer);
    return result;
}

static void run_tests(void)
{
    struct {
        const char *input;
        const char *expected;
    } tests[] = {
        {"", ""},
        {"a", "a"},
        {"abc", "cba"},
        {"Hello, world!", "!dlrow ,olleH"},
        {"Line\n", "\neniL"},
    };

    size_t test_count = sizeof(tests) / sizeof(tests[0]);
    for (size_t i = 0; i < test_count; i++)
    {
        if (!test_reverse(tests[i].input, tests[i].expected))
        {
            fprintf(stderr, "Test %zu failed: input=\"%s\" expected=\"%s\"\n",
                    i + 1, tests[i].input, tests[i].expected);
            exit(EXIT_FAILURE);
        }
    }

    printf("All %zu tests passed.\n", test_count);
}

int main(void)
{
    run_tests();

    char line[1024];
    printf("Enter text: ");
    if (fgets(line, sizeof(line), stdin) == NULL)
        return 0;

    size_t len = strlen(line);
    if (len > 0 && line[len - 1] == '\n')
        line[--len] = '\0';

    printf("Reversed string: ");
    for (size_t i = len; i > 0; i--)
        putchar(line[i - 1]);
    putchar('\n');

    return 0;
}
