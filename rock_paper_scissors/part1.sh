


function random1_3()
{
	random=$(( $RANDOM % 3 ))
	random=$(($random + 1))
}

function win() #cj = choix joueur   cb = choix bot
{
	random1_3
    cj="$c"
    cb=$random
    if [ "$cj" == "$cb" ];then
        echo "> equality"
    elif [[ "$cj" == 1 && "$cb" == 2 ]];then
        echo "> paper covers rock"
    elif [[ "$cj" == 2 && "$cb" == 3 ]];then
        echo "> scissors cut paper"
    elif [[ "$cj" == 3 && "$cb" == 1 ]];then
        echo "> rock crushes scissors"
    elif [[ "$cb" == 1 && "$cj" == 2 ]];then
        echo "> paper covers rock"
        victory_player=$(($victory_player + 1))
    elif [[ "$cb" == 2 && "$cj" == 3 ]];then
        echo "> scissors cut paper"
        victory_player=$(($victory_player + 1))
    elif [[ "$cb" == 3 && "$cj" == 1 ]];then
        echo "> rock crushes scissors"
        victory_player=$(($victory_player + 1))
    fi
}



function aff_choice() #c = choice
{
	echo "	1- rock"
	echo "	2- paper"
	echo "	3- scissors"
	echo "	quit"
	echo ""
	echo -n "Your choice: "
	read c
	if [ "$c" == 1 ] || [ "$c" == 2 ] || [ "$c" == 3 ]
	then
		echo ""
	    win
	    score
	    echo ""
	elif [ "$c" == "quit" ]
		then
			quit
	else
	    echo "enter 1,2,3 ou quit"
	fi
}

function score()
{
	echo "> Score : $victory_player"
}

function quit()
{
	echo -n "Are you sure?(y/n) "
	read y
	if [[ "$y" == "y" ]]; then
		echo "You left"
	elif [[ "$y" == "n" ]]; then
		echo "You resume the game"
	else
		echo "Wright \'y\' or \'n\'"
		quit
	fi
}