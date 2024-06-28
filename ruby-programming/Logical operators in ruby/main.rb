=begin
Logical operator: To perform or To compare the more than one condition

--> Applied between the two conditions.

1) Logical AND (&&): ALL conditions are true then 
the resultant of the logical AND is true otherwise false.


Let A and B are two conditions.

A   B   (A && B) <==> A and B
--------------------
T   T     T
T   F     F
F   T     F
F   F     F
--------------------


0= false
1= true

Applied three conditions.

Let A,B and C are two conditions.

A B C  (A && B && C)
0 0 0   0
0 0 1   0
0 1 0   0
0 1 1   0
1 0 0   0
1 0 1   0
1 1 0   0
1 1 1   1



2) Logical OR (||): Any one condition is  true then the resultant of the 
logical OR is true otherwise false.

Let A and B are two conditions

|| Trueth Table:-
--------------------
A   B   (A || B) <==> (A or B)
--------------------
T   T     T
T   F     T
F   T     T
F   F     F
--------------------



A B C  (A || B || C)
0 0 0   0
0 0 1   1
0 1 0   1
0 1 1   1
1 0 0   1
1 0 1   1
1 1 0   1
1 1 1   1

3) Logical NOT (!) : 
--> Applied only singel condition.
Opposit results applied for one condition

Let A is condition

--------------------
A   !A <==> not(A)
--------------------
T    F
F    T

=end

a=1
b=2
c=3
d=4
print("\n", (a>b) && (c<d)) # 0 && 1 ==> 0
print("\n",(a>b) || (c<d)) # 0 || 1 ==> 1
print("\n",!(a>b)) # !(0) ==> 1
print("\n",!( (a>b) || (c<d) ) ) #  !(0 || 1) => !(1) ==> 0
