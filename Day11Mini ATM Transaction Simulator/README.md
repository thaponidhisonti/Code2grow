Start the program

Set initial balance to ₹10000  
Set transaction count to 0  

Print "Welcome to Mini ATM Simulator"  
Print "Initial Balance: ₹10000"  

While transaction count is less than 5  
    Show menu options:  
        1. Check Balance  
        2. Deposit  
        3. Withdraw  
        4. Exit  

    Ask user to enter their choice  
    Read the choice  

    If choice is 1  
        Show current balance  
        Increase transaction count by 1  

    Else if choice is 2  
        Ask user to enter deposit amount  
        Read amount  
        If amount is greater than 0  
            Add amount to balance  
            Show deposit success message  
            Increase transaction count by 1  
        Else  
            Show invalid deposit message  

    Else if choice is 3  
        Ask user to enter withdrawal amount  
        Read amount  
        If amount is greater than 0  
            If balance minus amount is greater than or equal to ₹500  
                Subtract amount from balance  
                Show withdrawal success message  
                Increase transaction count by 1  
            Else  
                Show insufficient balance message  
        Else  
            Show invalid withdrawal message  

    Else if choice is 4  
        Show exit message  
        Break the loop  

    Else  
        Show invalid choice message  

End of loop  

Print "Transaction Summary"  
Print total transactions done  
Print final balance  
Print "Session Ended"

End the program
