"""
Test cases for is_armstrong()
Save the above program as armstrong.py, then run this file with:
    python -m unittest test_armstrong.py
"""

import unittest
import armstrong
from armstrong import is_armstrong


class TestArmstrongNumber(unittest.TestCase):

    def test_known_armstrong_numbers(self):
        # Verified Armstrong numbers
        self.assertTrue(is_armstrong(153))    # 1^3+5^3+3^3 = 153
        self.assertTrue(is_armstrong(370))    # 3^3+7^3+0^3 = 370
        self.assertTrue(is_armstrong(371))    # 3^3+7^3+1^3 = 371
        self.assertTrue(is_armstrong(407))    # 4^3+0^3+7^3 = 407
        self.assertTrue(is_armstrong(9474))   # 9^4+4^4+7^4+4^4 = 9474

    def test_single_digit_numbers(self):
        # All single-digit numbers (0-9) are Armstrong numbers since n^1 = n
        for n in range(10):
            self.assertTrue(is_armstrong(n))

    def test_non_armstrong_numbers(self):
        self.assertFalse(is_armstrong(123))
        self.assertFalse(is_armstrong(100))
        self.assertFalse(is_armstrong(9999))
        self.assertFalse(is_armstrong(1000))

    def test_zero(self):
        # 0 is considered an Armstrong number (0^1 = 0)
        self.assertTrue(is_armstrong(0))

    def test_negative_number_raises_error(self):
        # Negative numbers should raise a ValueError
        with self.assertRaises(ValueError):
            is_armstrong(-153)
        with self.assertRaises(ValueError):
            is_armstrong(-1)

    def test_large_armstrong_number(self):
        # 5-digit Armstrong number
        self.assertTrue(is_armstrong(54748))  # 5^5+4^5+7^5+4^5+8^5 = 54748

    def test_large_non_armstrong_number(self):
        self.assertFalse(is_armstrong(12345))
        self.assertFalse(is_armstrong(99999))


if __name__ == "__main__":
    unittest.main()