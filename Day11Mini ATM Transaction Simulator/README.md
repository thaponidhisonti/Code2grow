START

SET balance = 10000
SET transactions = 0

DISPLAY "========= Mini ATM Simulator ========="
DISPLAY "Initial Balance: ₹10000"

WHILE transactions < 5
    DISPLAY menu:
        1. Check Balance
        2. Deposit
        3. Withdraw
        4. Exit

    PROMPT user to enter choice
    READ choice

    IF choice == 1 THEN
        DISPLAY current balance
        INCREMENT transactions

    ELSE IF choice == 2 THEN
        PROMPT user to enter deposit amount
        READ amount
        IF amount > 0 THEN
            ADD amount to balance
            DISPLAY success message
            INCREMENT transactions
        ELSE
            DISPLAY invalid deposit message
        END IF

    ELSE IF choice == 3 THEN
        PROMPT user to enter withdrawal amount
        READ amount
        IF amount > 0 THEN
            IF balance - amount >= 500 THEN
                SUBTRACT amount from balance
                DISPLAY success message with new balance
                INCREMENT transactions
            ELSE
                DISPLAY insufficient balance message
            END IF
        ELSE
            DISPLAY invalid withdrawal message
        END IF

    ELSE IF choice == 4 THEN
        DISPLAY exit message
        BREAK loop

    ELSE
        DISPLAY invalid choice message
    END IF
END WHILE

DISPLAY "========= Transaction Summary ========="
DISPLAY total transactions
DISPLAY final balance
DISPLAY "Session Ended."

END
