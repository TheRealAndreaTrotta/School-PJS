import myfunctions

play_again = 'y'
player_score = 0 ; cpu_score = 0

while play_again.lower() in ['y', 'yes']:
    myfunctions.scoreboard(player_score, cpu_score)

    combat_result = 0

    ply_choice = input("+ Write your choice (Rock-Paper-Scissors): ").lower()
    cpu_choice = myfunctions.choice()

    myfunctions.combat_print(ply_choice)           
    print(f"\n+ Jarvis: I say {cpu_choice}!")
    myfunctions.combat_print(cpu_choice)

    combat_result = myfunctions.combat(ply_choice, cpu_choice)
    myfunctions.combat_sentence(combat_result)
    
    if combat_result == 1:
        player_score += 1
    elif combat_result == 0:
        cpu_score += 1
    else:
        continue

    play_again = input("+\n+ Do you want to play again? (yes/no): ")
    
    myfunctions.endl()
    myfunctions.clear_screen(play_again)

print("\nThanks for playing!")
