#include <stdlib.h>
#include <stdio.h>

class Fighter
{
public:
	//コンストラクタ
	Fighter();
	//デストラクタ
	~Fighter();

	int m_hp;
	int m_str;
	int m_mag;
	int m_tec;
	int m_spd;
	int m_def;
	int m_iuc;
	int m_mde;
};

Fighter::Fighter()
{
	m_hp  = 0;
	m_str = 0;
	m_mag = 0;
	m_tec = 0;
	m_spd = 0;
	m_def = 0;
	m_iuc = 0;
	m_mde = 0;
};

Fighter::~Fighter()
{

}

int main()
{
	Fighter fighter();

	printf("m_hpz%d\n", fighter.m_hp);
	printf("m_strz%d\n", fighter.m_str);
	printf("m_magz%d\n", fighter.m_mag);
	printf("m_tecz%d\n", fighter.m_tec);
	printf("m_spdz%d\n", fighter.m_spd);
	printf("m_defz%d\n", fighter.m_def);
	printf("m_iucz%d\n", fighter.m_iuc);
	printf("m_mdez%d\n", fighter.m_mde);

	system("pause");
	return 0;
}