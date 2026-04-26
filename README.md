# CS 210 Portfolio Project: Corner Grocer

## Project Summary

For this project, I created a C++ program for the Corner Grocer. The purpose of the program was to read a text file of grocery items and count how many times each item appeared. This helps solve the problem of tracking item purchase frequency so the store can better understand which products are purchased the most.

The program gives the user a menu with four options. The user can search for one item, print all item frequencies, print a histogram, or exit the program. The program also creates a backup file called frequency.dat that stores each item and its count.

## What I Did Well

One thing I think I did well was organizing the program using a class. I created a GroceryTracker class to handle the file reading, frequency counting, menu options, and output. This helped keep the program cleaner instead of putting everything inside main.

I also think using a map worked well because it made it easier to store each grocery item with its frequency.

## Where I Could Improve

One area I could improve is file handling. At first, getting the input file to load correctly was confusing because Visual Studio was looking for the file in a specific folder. In the future, I would like to make the file path setup cleaner so the program is easier to move between computers.

I could also improve the program by making the item search ignore capitalization. For example, if the file has “Cranberries,” the user should still get the right result if they type “cranberries.”

## Challenges I Faced

The most challenging part of this project was working with the input file and making sure the program could find it. I also had to better understand how the map stored each item and counted the frequency. I worked through this by testing the program step by step and fixing one issue at a time.

Visual Studio, zyBooks, and ChatGPT were helpful resources while I worked through the project.

## Transferable Skills

The skills from this project will transfer to other programming assignments because I practiced using classes, maps, file input and output, menu logic, and input validation. These are skills I know I will continue using in future C++ projects and other programming courses.

## Maintainability, Readability, and Adaptability

I made the program more maintainable by separating the code into different files and using a class. I also used clear function names and inline comments so the code would be easier to understand later. The program is adaptable because the GroceryTracker class could be updated later with more menu options or different types of reports without rewriting the entire program.
