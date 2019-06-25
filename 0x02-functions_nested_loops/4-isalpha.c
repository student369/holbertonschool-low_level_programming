/**
 * _isalpha - function to verify if the character
 * formed part of the alphabet
 * @c: The character to verify
 * Return: 1 if is lowercase or uppercase letter or 0 if is not
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
	    (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
