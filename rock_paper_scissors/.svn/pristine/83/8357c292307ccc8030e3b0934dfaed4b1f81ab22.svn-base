function random1_3()
{
	random=$(( $RANDOM % 3 ))
	random=$(($random + 1))
	echo ""
	if [ "$random" == 1 ]; then
		echo "AI choose: rock"
	elif [ "$random" == 2 ]; then
		echo "AI choose: paper"
	elif [ "$random" == 3 ]; then
		echo "AI choose: scissors"
	fi
	
	if [ "$c" == 1 ]; then
		echo "YOU choose: rock"
	elif [ "$c" == 2 ]; then
		echo "YOU choose: paper"
	elif [ "$c" == 3 ]; then
		echo "YOU choose: scissors"
	fi
	clear
	hi
}

function win() #cj = choix joueur   cb = choix bot
{
	random1_3
    cj="$c"
    cb=$random
    if [ "$cj" == "$cb" ];then
        echo "=> equality"
    elif [[ "$cj" == 1 && "$cb" == 2 ]];then
        echo "=> (AI) paper covers rock (YOU)"
        v_b=$(($v_b + 1))
    elif [[ "$cj" == 2 && "$cb" == 3 ]];then
        echo "=> (AI) scissors cut paper (YOU)"
        v_b=$(($v_b + 1))
    elif [[ "$cj" == 3 && "$cb" == 1 ]];then
        echo "=> (AI) rock crushes scissors (YOU)"
        v_b=$(($v_b + 1))
    elif [[ "$cb" == 1 && "$cj" == 2 ]];then
        echo "=> (YOU) paper covers rock (AI)"
        v_p=$(($v_p + 1))
    elif [[ "$cb" == 2 && "$cj" == 3 ]];then
        echo "=> (YOU) scissors cut paper (AI)"
        v_p=$(($v_p + 1))
    elif [[ "$cb" == 3 && "$cj" == 1 ]];then
        echo "=> (YOU) rock crushes scissors (AI)"
        v_p=$(($v_p + 1))
    fi
}



function aff_choice() #c = choice
{
	echo ""
	echo -e "\033[34m
						1- rock
						2- paper
						3- scissors
						quit\033[0m"
	echo ""
	echo -n "Your choice: "
	read c
	# choice
	if [ "$c" == 1 ] || [ "$c" == 2 ] || [ "$c" == 3 ]
	then
	    win
	    score
	elif [ "$c" == "quit" ]
		then
			quit
	else
	    echo "enter 1,2,3 ou quit"
	fi
	echo ""
}

function score()
{
	echo "=> You : $v_p  |  AI : $v_b"
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