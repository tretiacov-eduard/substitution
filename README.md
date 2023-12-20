Substitution Cipher

This C program implements a substitution cipher, allowing the user to encrypt a message using a provided substitution key. The substitution key is expected to be a string of 26 unique alphabetical characters. The program checks the validity of the key and then encrypts the user's input message.
How to Use

    Compile the Program

    Before running the program, ensure you have a C compiler installed. If not, you can install one such as GCC.

    bash

gcc substitution_cipher.c -o substitution_cipher

Run the Program

Execute the compiled program.

bash

./substitution_cipher key

Replace key with a 26-character substitution key.

Input Message

Enter the message when prompted.

plaintext

plaintext: Hello, World!

View Encrypted Message

The program will output the encrypted ciphertext.

plaintext

    ciphertext: Uryyb, Jbeyq!

Key Validation

The program checks the validity of the provided substitution key:

    It ensures that the key contains exactly 26 characters.
    It verifies that the key consists only of alphabetical characters.
    It checks for repeated characters in the key.

If any of these conditions are not met, the program provides an appropriate error message and exits.
Functions

    return_char(char c): Converts an alphabetical character to its corresponding position in the alphabet (0-indexed).

Example

For the input key:

plaintext

QWERTYUIOPASDFGHJKLZXCVBNM

The program encrypts the message "Hello, World!" to "Uryyb, Jbeyq!" using the provided substitution key.