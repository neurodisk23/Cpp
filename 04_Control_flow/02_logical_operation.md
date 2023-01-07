There are three logic operators in C++:
* and
* or
* not.

There are two Boolean values:
* True = 1
* False = 0
  
  
| Operator      | Behavior | Example    |
| :---        |    :----:   |          ---: |
|Assume A=1 , B=1, C = 0, D= 0|
|&&| Logical And: if both inputs are non-zero the outcome of the operation is true| A&&B =1 , A&&C = 0|
| or | Logical Or: if at least one  inputs are non-zero the outcome of the operation is true| A or B =1 , A or C = 1 , C or D = 0|
|!| Logical Not: Negates the logical condition| !(A&&B) =0 , !(C or D) = 1|
  
Note : or = ||
