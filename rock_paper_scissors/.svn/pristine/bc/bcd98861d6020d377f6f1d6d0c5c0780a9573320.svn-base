sordi=0
sjoueur=0
function match_param()
{
	if ! [ "$1" == "" ]
	then
		echo "Aucune option ne sera prise en compte"
	fi
	echo -e "Cette variante du shifumi classic se nomme, le 'Pierre Feuille Ciseaux Lezard Spock'.\n
Voici les quelques regles de base:\n
			=> Les ciseaux coupent le papier,
			=> Le papier bat la pierre,
			=> La pierre écrase le lézard,
			=> Le lézard empoisonne Spock,
			=> Spock écrabouille les ciseaux,
			=> Les ciseaux décapitent le lézard,
			=> Le lézard mange le papier,
			=> Le papier repousse Spock,
			=> Spock détruit la pierre,
			=> La pierre bat les ciseaux.\n
Voila vous voici fin pret a commencer, \033[32;4mcombien de point vous semble necessaire pour gagner ?\033[0m"
	read limite
	while ! [ "$(echo $limite | grep "^[1-9]*$")" ];do
		echo -e "\033[32;4mCombien de point vous semble necessaire pour gagner ?(Entrez un entier)\033[0m"
		read limite
	done
	clear
	next
}

function next()
{
	if [[ $cumpter == "quit" || $sordi == $limite || $sjoueur == $limite ]]
	then
		fin
	else
		echo -e "Bien 7 choix s'offre a vous:\n
\t\t=> 1 : Pierre\n\t\t=> 2 : Feuille
\t\t=> 3 : Ciseaux\n\t\t=> 4 : Lezard\n\t\t=> 5 : Spock\n\t\t=> 6 : Regles"
		echo -e "\t\t=> 7 : Quitter\n\n\t\t\033[34mScore joueur:"$sjoueur"\033[0m\n\t\t\033[31mScore ordi:"$sordi"\033[0m"
		echo -e "\n\033[32;4mQue choisissez vous ?\033[0m"
		read choix
		while ! [ "$(echo $choix | grep "^[1-7]$")" ];do
			echo -e "Seul 7 choix s'offre a vous:\n
\t\t=> 1 : Pierre\n\t\t=> 2 : Feuille
\t\t=> 3 : Ciseaux\n\t\t=> 4 : Lezard\n\t\t=> 5 : Spock\n\t\t=> 6 : Regles"
			echo -e "\t\t=> 7 : Quitter\n\n\t\t\033[34mScore joueur:"$sjoueur"\033[0m\n\t\t\033[31mScore ordi:"$sordi"\033[0m"
			echo -e "\n\033[32;4mQue choisissez vous ?\033[0m"
			read choix
		done
		if [ "$choix" == 6 ];then
			regles
		elif [ "$choix" == 7 ];then
			quit
		else
			fight
		fi
	fi
}

function quit()
{
	echo -e "\033[32;4mEtes vous sur de vouloir quitter ?(y/n)\033[0m"
	read quitter
	while ! [ "$(echo $quitter | grep "^y$")" ] && ! [ "$(echo $quitter | grep "^n$")" ];do
		echo -e "\033[32;4mEntrez (y ou n).\nEtes vous sur de vouloir quitter ?(y/n)\033[0m"
		read quitter
	done
	if [ "$(echo $quitter | grep "^y$")" ]; then
		clear
		cumpter="quit"
		fin
	elif ! [ "$(echo $quitter | grep "^y$")" ]; then
		clear
		next
	fi
}

function regles()
{
	clear
	echo -e "\n\t\t\t=> Les ciseaux coupent le papier,
			=> Le papier bat la pierre,
			=> La pierre écrase le lézard,
			=> Le lézard empoisonne Spock,
			=> Spock écrabouille les ciseaux,
			=> Les ciseaux décapitent le lézard,
			=> Le lézard mange le papier,
			=> Le papier repousse Spock,
			=> Spock détruit la pierre,
			=> La pierre bat les ciseaux.\n

\033[32;4mEntrez OK pour continuer:\033[0m"
	read continu
	while ! [ "$(echo $continu | grep "^OK$")" ]; do
		echo -e "\033[32;4mEntrez OK pour continuer:\033[0m"
		read continu
	done
	clear
	next
}

function fight()
{
	random=$(( $RANDOM % 5 ))
	random=$(($random + 1))
	if [ $random == $choix ];then
		clear
		echo -e "\033[33mEgalite vous avez jouer la meme chose\033[0m"
		next
	else
		source ./"P\F\S\S\L2.sh"
		match
	fi
}