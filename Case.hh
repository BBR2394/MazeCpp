
class Case
{
public:
	Case();
	~Case();

private:
	int _x;
	int _y;
	int _data; /* for test */

	Case *up;
	Case *down;
	Case *rigth;
	Case *left;

public:
	int coordinatesX() const;
	int coordinatesY() const;
};