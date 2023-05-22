#Roman Numeral to Integer Converter
>This is a simple C program that converts a Roman numeral to its equivalent integer value. It accepts a Roman numeral as a command-line argument and outputs the corresponding integer value.

##Prerequisites
>Before running this program, ensure that you have a C compiler installed on your system.

##Usage
>Clone or download the repository to your local machine.
>Open a terminal and navigate to the project directory.
>Compile the program using the following command:

`
$gcc -o romantoint romantoint.c
`
>Run the program by providing a Roman numeral as a command-line argument:
`
./romantoint [Roman Numeral]
Replace [Roman Numeral] with the Roman numeral you want to convert.
`

>Example
`
./romantoint XVII
`
>Output:
>17
###Limitations
The program assumes that the provided Roman numeral is valid.
It only supports Roman numerals up to the value of 3999.
