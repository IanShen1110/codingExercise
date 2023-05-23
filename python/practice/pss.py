import random

restart = "yes"
while restart == "yes":
    def indexToChoice(index):
        if index == 1:
            return "rock"
        if index == 2:
            return "paper"
        if index == 3:
            return "scissors"

    choice = {'rock': 1,
              'paper': 2,
              'scissors': 3}
    computer = random.choice(list(choice.values()))
    player = 0
    while True:
        try:
            player = choice[input("rock, paper, or scissors: ").lower()]
        except KeyError:
            print("Invalid input")
        else: break
    print("Computer: ", indexToChoice(computer))
    print("You: ", indexToChoice(player))
    """
    print("Computer: ", computer)
    print("You: ", player)
    """
    if player == computer:
        print("Tie!")
    elif player + 1 == computer or player - 2 == computer:
        print("You suck ass")
    elif player - 1 == computer or player + 2 == computer:
        print("ok gud")
    
    restart = input("Play again? (yes/[no]): ").lower()
print("Game Over")