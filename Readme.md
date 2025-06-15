DSA Project: Library Management System using Structures and Arrays in C++

Implementation of a basic Library Management System demonstrating key data structure operations such as insertion, deletion, searching, updating, and traversal using static arrays and structures in C++.
DSA-Library-Management-System

Features and Functionalities
Book Structure:
> A Book structure is used to represent each book in the system, containing:
 -int bookID : Unique identifier for the book.
 -string title : Title of the book.
 -string author : Author's name.
 -int quantity : Number of available copies

Data Storage:
 > The books are stored in a statically allocated array:
Book library[100];



Insertion:
-Function: addBook(Book library[], int &count)
-Adds a new book record at the next available index.
-Time Complexity: O(1) (amortized, assuming space available).



Traversal (Display All Books):
-Function: displayBook(const Book library[], int count)
-Traverses the array and prints each book's details.
-Time Complexity: O(n)

 
    
Search:
-Function: searchBook(const Book library[], int &count)
-Performs a linear search on the array to find a book by bookID
-Time Complexity: O(n)

    
    
Update:
-Function: updateBook(Book library[], int &count)
-Searches for a book by bookID and updates its title, author, and quantity.




Deletion:
-Function: deleteBook(Book library[], int &count)
-Deletes a book by shifting all subsequent records to the left.
-Time Complexity: O(n) in worst case.

