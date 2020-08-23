void timeDevision (int *pointerOnHours,int *pointerOnMiniuts)
{
    *pointerOnHours=*pointerOnMiniuts/60;
    *pointerOnMiniuts=*pointerOnMiniuts%60;
}
