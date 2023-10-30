# Bus_Reservation_system
Final Mini Project of PCL course (Sem-1)                                                                                                                                                                                                                                                                                                                                                                                                         
Algorithm: Bus Ticket Booking System

Step 1: Initialize variables
    - Create a structure to store customer information, e.g., struct customer { ... }
    - Declare variables for user choice, the number of tickets, and the destination.
    - Initialize an array to store customer information, e.g., c[100].
    - Declare variables for loop counters, e.g., i, k, x.

Step 2: Display a welcome message
    - Print a welcome message for the bus service.

Step 3: Main Menu Loop
    - Enter a loop that displays the main menu options and waits for the user's choice.
    - Display menu options:
        1. View Routes
        2. Book Ticket
        3. View Booked Ticket Records
        4. Exit
    - Read the user's choice (c).

Step 4: Process User Choice
    - Use a switch statement to process the user's choice (c).
        - Case 1: View Routes
            - Call the bus_list() function to display the available routes.
        - Case 2: Book Ticket
            - Call the creator() function to book a ticket and store the number of tickets booked (u).
        - Case 3: View Booked Ticket Records
            - Call the printer(u) function to print the booked ticket records.
        - Case 4: Exit
            - Print a thank you message and exit the program.
        - Default: Display an error message for invalid choices.

Step 5: creator() Function
    - Display available routes and ask the user to select a destination (d).
    - Based on the destination (d), display seat availability and timing.
    - Prompt the user to enter the number of tickets (ntic).
    - Validate the number of tickets (maximum of 6).
    - Use a loop to gather customer information for each ticket:
        - Prompt for name, age, gender, phone number, email, and address.
    - Display a booking success message and payment details.
    - Return the number of tickets booked (ntic).

Step 6: printer() Function
    - Print the booked ticket records for each passenger using a loop.
    - Display customer information, including name, age, gender, phone number, email, and address.

Step 7: bus_list() Function
    - Display the list of available bus routes.

Step 8: End of the Main Menu Loop
    - Continue displaying the main menu until the user chooses to exit (c=4).
    - Exit the program with a thank you message.

Step 9: End of Algorithm

