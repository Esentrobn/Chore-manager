# Chore-manager
Chore manager program

‘PrecondViolatedExcep’ consists of definitions of logic errors and what happens if a run time error occurs

 ‘ListInterface’ is  used to primarily define a list protocol. 
 
        member and non member functions used
 ‘setItem()’ and ‘setNext()’ save the Item data and moves to the next pointer  in the linked list respectively.

non member functions :- ‘display ()’ obviously displays the list and then to add to the list 'addList()'

The program gets into a while loop right after It has checked the length of the object in the external file and askes the user
to choose ops  
If the user typed ‘-999’, it will skip the while loop and asks the user if the user wants to add a list.

          Test Run

> a.out

There are 5 items on the list.
************Today's List************
1  Take out the trash
2  Clean room
3  Go to the gym
4  Study
5  Go to class
Which item would you like to delete? Use -999 to stop: 7

Precondition Violated Exception: There is no item there to remove 
************Today's List************
1  Take out the trash
2  Clean room
3  Go to the gym
4  Study
5  Go to class
Which item would you like to delete? Use -999 to stop: 2

************Today's List************
1  Take out the trash
2  Go to the gym
3  Study
4  Go to class
Which item would you like to delete? Use -999 to stop: 3

************Today's List************
1  Take out the trash
2  Go to the gym
3  Go to class
Which item would you like to delete? Use -999 to stop: -999

************Today's List************
1  Take out the trash
2  Go to the gym
3  Go to class

Add an item to your list? yes or no: yes

Position: 7

Item: Go to sleep
Precondition Violated Exception: You can't add an item there.
************Today's List************
1  Take out the trash
2  Go to the gym
3  Go to class

Add an item to your list? yes or no: yes

Position: 3

Item: Go to sleep
************Today's List************
1  Take out the trash
2  Go to the gym
3  Go to sleep
4  Go to class

Add an item to your list? yes or no: no

************Today's List************
1  Take out the trash
2  Go to the gym
3  Go to sleep
4  Go to class
> ^Dexit

