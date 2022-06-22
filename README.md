# Plane_Ticket_Priorityqueue
Flight Booking systemn using priority queue

**OUTPUT
 Menu
1.Insert
2.Display
3.Exit
Choice : 1
Total seats :20 
List of priority:1-->2-->3-->4
List of Passenger no:
4:Assistance passenger
5:Extra Paid Passenger
6:Child Passenger priority
7:Common Passenger priority
Enter the no of Booked Passengers:
10
List of priority:1-->2-->3-->4
List of Passenger no:
4:Assistance passenger
5:Extra Paid Passenger
6:Child Passenger priority
7:Common Passenger priority

Enter the Passenger no and its priority : 7 4

List of priority:1-->2-->3-->4
List of Passenger no:
4:Assistance passenger
5:Extra Paid Passenger
6:Child Passenger priority
7:Common Passenger priority

Enter the Passenger no and its priority : 6 3

List of priority:1-->2-->3-->4
List of Passenger no:
4:Assistance passenger
5:Extra Paid Passenger
6:Child Passenger priority
7:Common Passenger priority

Enter the Passenger no and its priority : 5 2

List of priority:1-->2-->3-->4
List of Passenger no:
4:Assistance passenger
5:Extra Paid Passenger
6:Child Passenger priority
7:Common Passenger priority

Enter the Passenger no and its priority : 4 1

List of priority:1-->2-->3-->4
List of Passenger no:
4:Assistance passenger
5:Extra Paid Passenger
6:Child Passenger priority
7:Common Passenger priority

Enter the Passenger no and its priority : 7 4

List of priority:1-->2-->3-->4
List of Passenger no:
4:Assistance passenger
5:Extra Paid Passenger
6:Child Passenger priority
7:Common Passenger priority

Enter the Passenger no and its priority : 6 3

List of priority:1-->2-->3-->4
List of Passenger no:
4:Assistance passenger
5:Extra Paid Passenger
6:Child Passenger priority
7:Common Passenger priority

Enter the Passenger no and its priority : 5 2

List of priority:1-->2-->3-->4
List of Passenger no:
4:Assistance passenger
5:Extra Paid Passenger
6:Child Passenger priority
7:Common Passenger priority

Enter the Passenger no and its priority : 4 1

List of priority:1-->2-->3-->4
List of Passenger no:
4:Assistance passenger
5:Extra Paid Passenger
6:Child Passenger priority
7:Common Passenger priority

Enter the Passenger no and its priority : 7 4

List of priority:1-->2-->3-->4
List of Passenger no:
4:Assistance passenger
5:Extra Paid Passenger
6:Child Passenger priority
7:Common Passenger priority

Enter the Passenger no and its priority : 4 1

press 1 to continue
1
Menu
1.Insert
2.Display
3.Exit
Choice : 2
********************
Final Output:
Total Seats in the flight are 20
List of Passenger is as below
Enter the no of Booked Passengers:10
Assistance Passenger 1
 Assistance Passenger 2
 Assistance Passenger 3
 Extra paid Passenger 4
Extra paid Passenger 5
Child Passenger 6
Child Passenger 7
Common Passenger 8
Common Passenger 9
Common Passenger 10
The total occupied Seats ranges from 1 to 10
The Vacant Seats ranges from 11 to 20
 
 
 
***/
Case Study
The process of Air flight Indigo reservation includes the boarding card that is printed
with a seat number for the aircraft cabin. In many cases, low-cost airline operators do
not allocate seats at check-in, allowing passengers to choose when they board instead.
An attempt is made to avoid a free-for-all from developing as a result, as follows:
When booking a budget flight, it is often possible at extra cost to have a ‘priority’
stamped boarding card; this allows passengers to leave the departure gate at the head
of the queue, giving them a wider availability of seats on the aircraft. They are,
however, preceded by those needing assistance to travel from the gate to the aircraft
cabin, because of reduced mobility or accidental injury.
When these two groups have left, priority is often given to those travelling with
infants or small children. After this, the remaining passengers may leave the departure
gate and scramble for a seat that is not yet occupied!
We will model this situation as a simulation, based upon a queue to which priority
conditions apply. Of the boarding queue ‘items’, the highest priority is given in the
below order:-
1. Passengers needing assistance who are placed at the queue’s head (P_value 3)=
Assistance Passenger
2. Next are those who have paid extra for the privilege (P_value 2). = Extra Amount
Passenger
3. Followed by parents with small children (P_value 1) Children Passenger
4. At the rear are the remaining passengers at the gate (P_value 0) Common Passenger
There are four categories to consider and you can assign the priorities as follows:
Integer values of three for those in need of assistance, down to zero for the ‘standard’
passenger.

Task: Build the priority queue by ‘inserting’ passengers into it according to these
priority values.
Output: Total Seats in the flight are X
Enter the number of passengers Y
Then display the list of passenger in terms to their categories by numbering them
as per the nodes value
The total Occupied Seats ranges from 1 to ----
The Vacant Seats ranges from ---- to ------
Output window
Total Seats in the flight are 20
Enter the no of Booked Passengers: 10
List of Passenger is as below
Assistance Passenger 1
Assistance Passenger 2
Assistance Passenger 3
Extra Amount Passenger 4
Extra Amount Passenger 5
Children Passenger 6
Children Passenger 7
Common Passenger 8
Common Passenger 9
Common Passenger 10
The total Occupied Seats ranges from 1 to 10
The Vacant Seats ranges from 11 to 20



