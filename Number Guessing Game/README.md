Number Guessing Game in C
A simple, interactive command-line game written in C where the player tries to guess a randomly generated number between 1 and 100. It's a fantastic project for beginners looking to understand basic C syntax, loops, conditionals, and random number generation.

🎮 How It Works
The program randomly selects a secret number between 1 and 100.

The player is prompted to enter their guess.

The game provides immediate feedback:

"Too low!" if the guess is less than the secret number.

"Too high!" if the guess is greater than the secret number.

"Congratulations!" if the player guesses correctly.

The game tracks and displays the total number of attempts it took to find the correct number.

🚀 Features
Randomized Gameplay: Uses the <time.h> and <stdlib.h> libraries to ensure a truly unique secret number every time you play.

Smart Feedback: Guides the player closer to the answer with high/low hints.

Score Tracking: Counts your total attempts so you can try to beat your personal high score.