C Maze Generator and Solver

This repository contains a C program that generates and solves mazes. The program is divided into two parts: a generator and a solver.

Generator

The generator is located in the maze directory. To generate a maze, run the following command:

./generator <x> <y> [imperfect]

where:

    <x> is the number of rows in the maze
    <y> is the number of columns in the maze
    [imperfect] is an optional argument that, if specified, will generate an imperfect maze

The generated maze will be printed to the terminal and copied to a file named maze.txt.

Solver

The solver is located in the solver directory. To solve a maze, run the following command:

./solver <maze_file>

where:

    <maze_file> is the path to the maze file

The solver will print the solution to the maze to the terminal.

Known Issues

The generator may have memory problems when generating mazes with more than 1500 rows or columns. To fix this, you can manually call malloc() and free() twice.

Contributing

We welcome contributions to this repository. If you have any improvements or bug fixes, please submit a pull request.

License

The code in this repository is licensed under the MIT License.

Examples

Here are some examples of how to use the program:

# Generate a 10x10 maze
./generator 10 10

# Generate a 20x20 imperfect maze
./generator 20 20 imperfect

# Solve the maze from the previous step
./solver maze.txt
