#ifndef _QUERY_H
#define _QUERY_H

#include <vector>
#include "binmap.h"
#include "index.h"

using namespace std;

struct BINCONT
{
	string chrom;
	int pos1;
	int pos2;
	int cbin1;
	int cbin2;
	float obs;
	float exp;
};

//===QUERY===
class QUERY
{
public:
	QUERY();
	QUERY(const char *fileName, BINMAP &binmap, INDEX &index);
	~QUERY();
	void gen_random();
	void gen_rightdown();
	void output(const char *fileName);
protected:
	vector< BINCONT > bincont_vec;
	vector< BINCONT > random_bincont_vec;
	vector< BINCONT > rightdown_bincont_vec;		
};

#endif /* _QUERY_H */
