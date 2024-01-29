# 01-C-Microproject

A small C program which reads an input file, line by line. 

## Tasks:

Write a function called readFile(). It takes two parameters. One is a string for the name of the file. The other is an integer for the index. The function will return the string in the line that has the corresponding index.

The input files contain, on the first line, an integer number of lines to read after that first line. Each line after that will contain some character string.

## Example:
Suppose the input file is `input.txt`. It contains 4 lines. In your function definition, you should make an array of length 3, and populate the cells with the lines of the input file. Then return the lines specified by the index. So,

          readFile("input.txt", 1) will be the string "CSC344\n".


