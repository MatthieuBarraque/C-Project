C Brute-Force Square

This repository contains a C program that finds the largest square that can be formed from a given map of characters. The program uses a brute-force algorithm to iterate over all possible squares, starting with the smallest square and working up to the largest square.

The program takes a map file as input. The map file is a text file that contains a single line of characters. Each character in the map file represents a cell in the map. The character o represents an open cell, and the character . represents a closed cell.

The program outputs the dimensions of the largest square that can be formed from the map. The dimensions are printed to the standard output.

Algorithm

The algorithm works by iterating over all possible squares in the map. The algorithm starts with the smallest square, which is a square with one cell. The algorithm then checks to see if the square is valid. A square is valid if it is entirely contained within the map and if all of its cells are open.

If the square is valid, the algorithm records the dimensions of the square. The algorithm then moves on to the next square, which is a square with two cells. The algorithm continues iterating over all possible squares until it finds the largest square that is valid.

Usage

To use the program, you must first compile it. You can do this by running the following command:

gcc -o bsq bsq.c

Once the program is compiled, you can run it by passing the map file as an argument. For example, to run the program on the map file map.txt, you would run the following command:

./bsq map.txt

The program will output the dimensions of the largest square that can be formed from the map file. For example, if the map file contains the following text:

oo.
.oo

The program will output the following:

2 2

Contributing

We welcome contributions to this repository. If you have any improvements or bug fixes, please submit a pull request.

License

The code in this repository is licensed under the MIT License.

Example

Here is an example of a map file that can be used with the program:

oooo
.oooo
oooo

This map file contains a square with a side length of 4. The program will output the following:

4 4
