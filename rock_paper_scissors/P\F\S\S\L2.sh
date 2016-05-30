function match()
{
	if [[ $choix == 1 && $random == 3  ||  $choix == 1 && $random == 4 ]]; then
		clear
		if [ $random == 3 ]; then
			echo -e "\033[31m\t=> La pierre bat les ciseaux.\033[0m\n"
		else
			echo -e "\033[31m\t=> La pierre écrase le lézard.\033[0m\n"
		fi
		sjoueur=$(($sjoueur + 1))
		next
	elif [[ $random == 1 && $choix == 3  ||  $random == 1 && $choix == 4 ]]; then
		clear
		if [ $choix == 3 ]; then
			echo -e "\033[31m\t=> La pierre bat les ciseaux.\033[0m\n"
		else
			echo -e "\033[31m\t=> La pierre écrase le lézard.\033[0m\n"
		fi
		sordi=$(($sordi + 1))
		next
	else
		match1
	fi
}

function match1()
{
	if [[ $choix == 2 && $random == 1  ||  $choix == 2 && $random == 5 ]]; then
		clear
		if [ $random == 1 ]; then
			echo -e "\033[34m\t=> Le papier bat la pierre.\033[0m\n"
		else
			echo -e "\033[34m\t=> Le papier repousse Spock.\033[0m\n"
		fi
		sjoueur=$(($sjoueur + 1))
		next
	elif [[ $random == 2 && $choix == 1  ||  $random == 2 && $choix == 5 ]]; then
		clear
		if [ $choix == 1 ]; then
			echo -e "\033[31m\t=> Le papier bat la pierre.\033[0m\n"
		else
			echo -e "\033[31m\t=> Le papier repousse Spock.\033[0m\n"
		fi
		sordi=$(($sordi + 1))
		next
	else
		match2
	fi
}

function match2()
{
	if [[ $choix == 3 && $random == 2  ||  $choix == 3 && $random == 4 ]]; then
		clear
		if [ $random == 2 ]; then
			echo -e "\033[34m\t=> La pierre bat les ciseaux.\033[0m\n"
		else
			echo -e "\033[34m\t=> Les ciseaux décapitent le lézard.\033[0m\n"
		fi
		sjoueur=$(($sjoueur + 1))
		next
	elif [[ $random == 3 && $choix == 2  ||  $random == 3 && $choix == 4 ]]; then
		clear
		if [ $choix == 2 ]; then
			echo -e "\033[31m\t=> La pierre bat les ciseaux.\033[0m\n"
		else
			echo -e "\033[31m\t=> Les ciseaux décapitent le lézard.\033[0m\n"
		fi
		sordi=$(($sordi + 1))
		next
	else
		match3
	fi
}

function match3()
{
	if [[ $choix == 4 && $random == 2  ||  $choix == 4 && $random == 5 ]]; then
		clear
		if [ $random == 2 ]; then
			echo -e "\033[34m\t=> Le lézard mange le papier.\033[0m\n"
		else
			echo -e "\033[34m\t=> Le lézard empoisonne Spock.\033[0m\n"
		fi
		sjoueur=$(($sjoueur + 1))
		next
	elif [[ $random == 4 && $choix == 2  ||  $random == 4 && $choix == 5 ]]; then
		clear
		if [ $choix == 2 ]; then
			echo -e "\033[31m\t=> Le lézard mange le papier.\033[0m\n"
		else
			echo -e "\033[31m\t=> Le lézard empoisonne Spock.\033[0m\n"
		fi
		sordi=$(($sordi + 1))
		next
	else
		match4
	fi
}

function match4()
{
	if [[ $choix == 5 && $random == 1  ||  $choix == 5 && $random == 3 ]]; then
		clear
		if [ $random == 1 ]; then
			echo -e "\033[34m\t=> Spock détruit la pierre.\033[0m\n"
		else
			echo -e "\033[34m\t=> Spock écrabouille les ciseaux.\033[0m\n"
		fi
		sjoueur=$(($sjoueur + 1))
		next
	elif [[ $random == 5 && $choix == 1  ||  $random == 5 && $choix == 3 ]]; then
		clear
		if [ $choix == 1 ]; then
			echo -e "\033[31m\t=> Spock détruit la pierre.\033[0m\n"
		else
			echo -e "\033[31m\t=> Spock écrabouille les ciseaux.\033[0m\n"
		fi
		sordi=$(($sordi + 1))
		next
	else
		echo -e "\033[35;5;7mError inconnu\033[0m"
	fi
}