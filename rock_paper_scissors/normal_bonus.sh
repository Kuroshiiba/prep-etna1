source ./bonus.sh
source ./bonus_graph.sh

function main_normal()
{
	echo -n "Choose a number of rounds to play to win: "
	read nb_win
	if ! [ "$(echo $nb_win | grep "^[[:digit:]]*$")" ]
	then
	    echo "The script only need 1 number for argument"
	    echo""
	else
		clear
		v_p=0
		v_b=0
		i=0
		hi
		while ! [ $nb_win == "$v_p" ] && ! [ $nb_win == "$v_b" ]  && ! [[ "$y" == "y" ]]
		do
			{
				aff_choice
			}
		done
		if [ "$v_p" == $nb_win ];then
			echo "YOU won vs AI !!!"
			echo "See you on rock-paper-scissors."
		elif [ "$v_b" == $nb_win ];then
			echo "YOU lose vs AI !!!"
			echo "See you on rock-paper-scissors."
		else
			echo "See you on rock-paper-scissors."
		fi
	fi
}