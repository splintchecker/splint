enum Months {Jan = 1, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct,
	     Nov, Dec};

int main()
{
  int i = Jan + Oct;/*should LClint complain that a enumerated*/
  /*type was passed to the + operator? */
  return i;
}
