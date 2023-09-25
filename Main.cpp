#include <iostream>
	// #include is used to include external libraries which give addition code that can be used.
	// When including external libraries the code within thos libraries can then be called.

	//#include "externalFunctions.h"
	// This gives this file access to call functions from another .cpp file by declaring that files .h file.

std::string space = "\n";
std::string option;
	// These are global variables that can be used in all functions in this file.

void main() {
	// This is the main function of this file, it is of the "void" type and has no parameters/arguments.

/*
- Comments are lines inside the code which the operating system will not read when executing code.
- This allows information to be written for humans to look out to keep track of information without the system reading it.
- If comments are not used an error will appear as the system will try and read that information which has no syntax.

- Comments are split into Single Line Comments or Multi Line Comments.
- Single Line Comments are made using two forward slashes (//).
- Multi Line Comments are made using a forward slash, two stars (*), and another slash (/**/					/*
-- For Multi Line Comments the comments need to be placed between the stars for it to be registered as a comment.
-- Placing a Multi Line Comment inside another will not created a sub-comment but will cause the first comment to end.
*/

// The ";" is required to end a line of code and allow for another.
// Using "\n" when sending out a text a new line will be created.

//----------

/*
- On September 9th, 1947 a computer scientist named Grace Hopper found a moth in the Harvard Mark II computer log book
- and reported the world's first literal computer bug. However, the term "bug" in the sence of a technical error dates
- back to at least 1878 from Thomas Edison.

- C++ has several different errors which may occur during development.

- Compile-Time Errors are errors which are found by the compiler, the first line of defence against bugs.
-- Syntax Compile Error is an error which happens when certain C++ syntax rules are broken
--- For example missing semicolens ";", missing parenthesis "()", missing brackets "[]", or missing curly braces "{}".

-- Type Compile Error is an error which happens when a mismatch happens between types that are declared.
--- For example forgetting to declare a variable, or storing a value in the wrong variable type.

- Link-Time Error is an error which is found by the linker when trying to combine object files into an executable.
- This may happen after compiling a file as the linker takes separate files and combines them into an executable file.
-- For example using an undefined function, or writing Main() instead of main().

- Run-Time Error is an error which is found by checks when running an executable file which is not found by the compiler.
- This may happen when Compile-Time and Link-Time errors ask the system to do something it is unable to do.
-- For example dividing numbers by 0 creating a division error, or trying to open a non-existant file.

- Logic Error is an error which is found by the programmer when looking for the cause of an error result.
- This may happen after other errors have been solved but ends up with no result despite the code looking error-free.
-- For example if the programming logic is flawed or a mistake in an if statement or a loop.
*/

	std::cout <<
		"C++ files are split into .cpp files and .h/.hpp files. These are C++ and Header files respectively.\n" <<
		"- C++ files hold code which is executed upon the file being compiled and ran.\n" <<
		"- Header Files function lioke Internal Libraries, and allow code to be called from another C++ file.\n" <<
		space <<
		""

		;

		/*
- C++ files are split into different files for different purposes, the main file type is a .cpp file representing c++.
- Other file types are .h or .hpp files which are called Header files which are used to access code from another file.

- To compile c++ files from scratch inside the terminal g++ "file_name".cpp needs to be executed.
- When compiling the file a name can be given to the compiled c++ code by using g++ "file_name".cpp -o "new_name".
- To execute compiled files inside the terminal ./a.out "file_name" or ./"custom_file_name" needs to be executed.
*/
}