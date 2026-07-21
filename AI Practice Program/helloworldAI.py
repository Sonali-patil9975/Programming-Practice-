import sys

def main(name):
    """Print a greeting message with the given name."""
    # Print hello followed by the name
    print("Hello,", name)

# Run main() only if this script is executed directly
if __name__ == "__main__":
    # Use the name passed on the command line, or default to "World"
    name = sys.argv[1] if len(sys.argv) > 1 else "World"
    main(name)