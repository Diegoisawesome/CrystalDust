Common_EventScript_SetGymTrainers:: @ 8271F43
	switch VAR_0x8008
	case 1, VioletCity_Gym_SetGymTrainers
	case 2, AzaleaTown_Gym_SetGymTrainers
	case 3, GoldenrodCity_Gym_SetGymTrainers
	case 4, LavaridgeTown_Gym_SetGymTrainers
	case 5, NotVioletCity_Gym_SetGymTrainers
	case 6, FortreeCity_Gym_SetGymTrainers
	case 7, MossdeepCity_Gym_SetGymTrainers
	case 8, SootopolisCity_Gym_SetGymTrainers
	end

VioletCity_Gym_SetGymTrainers:: @ 8271FA1
	settrainerflag TRAINER_ABE
	settrainerflag TRAINER_ROD
	return

AzaleaTown_Gym_SetGymTrainers:: @ 8271FAB
	settrainerflag TRAINER_BENNY
	settrainerflag TRAINER_AL
	settrainerflag TRAINER_JOSH
	settrainerflag TRAINER_AMY_AND_MAY
	return

GoldenrodCity_Gym_SetGymTrainers:: @ 8271FBE
	settrainerflag TRAINER_CARRIE
	settrainerflag TRAINER_BRIDGET
	settrainerflag TRAINER_VICTORIA
	settrainerflag TRAINER_SAMANTHA
	return

LavaridgeTown_Gym_SetGymTrainers:: @ 8271FCE
	settrainerflag TRAINER_COLE
	settrainerflag TRAINER_AXLE
	settrainerflag TRAINER_KEEGAN
	settrainerflag TRAINER_GERALD
	settrainerflag TRAINER_DANIELLE
	settrainerflag TRAINER_JACE
	settrainerflag TRAINER_JEFF
	settrainerflag TRAINER_ELI
	return

NotVioletCity_Gym_SetGymTrainers:: @ 8271FE7
	settrainerflag TRAINER_MARK
	settrainerflag TRAINER_ALAN
	settrainerflag TRAINER_BAILEY
	settrainerflag TRAINER_TED
	settrainerflag TRAINER_MARY
	settrainerflag TRAINER_ALEXIA
	settrainerflag TRAINER_JODY
	return

FortreeCity_Gym_SetGymTrainers:: @ 8271FFD
	settrainerflag TRAINER_JARED
	settrainerflag TRAINER_FLINT
	settrainerflag TRAINER_ASHLEY
	settrainerflag TRAINER_EDWARDO
	settrainerflag TRAINER_HUMBERTO
	settrainerflag TRAINER_DARIUS
	return

MossdeepCity_Gym_SetGymTrainers:: @ 8272010
	settrainerflag TRAINER_PRESTON
	settrainerflag TRAINER_VIRGIL
	settrainerflag TRAINER_BLAKE
	settrainerflag TRAINER_HANNAH
	settrainerflag TRAINER_SAMANTHA_OLD
	settrainerflag TRAINER_MAURA
	settrainerflag TRAINER_SYLVIA
	settrainerflag TRAINER_NATE
	settrainerflag TRAINER_KATHLEEN
	settrainerflag TRAINER_CLIFFORD
	settrainerflag TRAINER_MACEY
	settrainerflag TRAINER_NICHOLAS
	return

SootopolisCity_Gym_SetGymTrainers:: @ 8272035
	settrainerflag TRAINER_ANDREA
	settrainerflag TRAINER_CRISSY
	settrainerflag TRAINER_BRIANNA
	settrainerflag TRAINER_CONNIE
	settrainerflag TRAINER_BRIDGET_OLD
	settrainerflag TRAINER_OLIVIA
	settrainerflag TRAINER_TIFFANY
	settrainerflag TRAINER_BETHANY
	settrainerflag TRAINER_ANNIKA
	settrainerflag TRAINER_DAPHNE
	return
