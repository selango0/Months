# Months
Design a class named Month. The class should have the following private members:
• Name: A string object that holds the name of a month, such as January, February, etc.
• monthNumber: An integer variable that holds the number of the month. For example,
January would be 1, February would be 2, etc. Valid values for this variable are 1 through 12.
In addition, provide the following member functions:
1. A default constructor that sets monthNumber to 1 and name to January.
2. A constructor that accepts the name of the month as an argument. It should set name to the
value passed as the argument and set monthNumber to the correct value.
3. A constructor that accepts the number of the month as an argument. It should set
monthNumber to the value passed as the argument and set name to the correct month name.
4. Appropriate set and get functions for the name and monthNumber member variables.
5. Prefix and postfix overloaded ++ operator functions that increment monthNumber and set
name to the name of next month. If monthNumber is set to 12 when these functions execute,
they should set monthNumber to 1 and name to January.
6. Overload the = operator. It should set both the monthName and monthNumber variables.
7. Overload cout s << operator and cin s >> operator to work with the Month class.
Demonstrate the class in a program.
o << cout s stream insertion operator. This operator should cause the date to be
displayed in the form shown in the sample output below.
o >> cin s stream extraction operator. This operator should prompt the user for the
name of a month. In the same operation, it should also set the monthName and
monthNumber variables.
Requirements
1. You can assume the name of the month will be typed in with the first letter capitalized and all
other letters lowercase.
2. The cin’s >> operator should read the month’s name (make sure you update the number).
3. Write the code for assigning to the month and monthNumber attributes in the set
functions, and just call the appropriate set function from the constructors. 
