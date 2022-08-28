
class Range
{
public:
	Range(int _start, int _end);

	int size() const;
	static Range all();

	int start, end;
}
