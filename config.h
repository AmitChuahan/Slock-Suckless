/*   ***********************************************************************************************
    **************************       Anon       ****************************************************
	************************************************************************************************
	************************************************************************************************          
/*

/* user and group to drop privileges to */
static const char *user  = "anon";
static const char *group = "users";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#000000",     /* after initialization */
	[INPUT] =  "#121224",   /* during input */
	[FAILED] = "#ff0000",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
