/*1��A���̶ӽ������ɸ�������Ӿ�ص���Ŀ���������ܣ��������������˹��̡����ڵ��˸��ͻ�����Ŀ���ʱ�䣬
���㲹��������ĳ����Ա����������̶ӿ��ٵ�����տ������ע����Ӿ�ص�������ߵ����ú�Χ�����������ֹ�
�ɡ������ߵ��ĵ���Ϊ167.5Ԫ/ƽ���ף�Χ���ĵ�����36.4Ԫ/�ס����У���Ӿ����״��ͼ��ʾ����ɫ����Ϊ�ߵ���
��ɫ����ΪΧ����
���̶�һ������5����Ӿ�ء��ֱ�Ϊ
1�ų�ֱ��12.2�ף��ߵ���3�ף�
2�ų�ֱ��5�ף��ߵ���2.8�ף�
3�ų�ֱ��4.8�ף��ߵ���1�ף�4�ų�ֱ����6�ף��ߵ���1.4�ף�
5�ų�ֱ��8.7�ף��ߵ���2.3�ס�

//============================================================
#include <iostream>
using namespace std;
���� //��������
int main(){
const double zddj=167.5;//�ߵ�����
  const double wldj=36.4;//Χ������
  const double pi=3.14;//����Բ����
double r;//��ֱ��
  double c;//�ߵ���
  double wlc;//Χ������
  double zds;//�ߵ����
  int i;
for(i=1;i<=5;i++)
{  cout<<"�������"<<i<<"����Ӿ������(ֱ�����ߵ���)��";
cin>>r>>c;
wlc=fwlc(r); //�������ã����ڼ���Χ�����ȣ�
zds=fzds(c,r); //�������ã����ڼ����ߵ����
cout<<"The cost of No."<<i<<" is:"
<<(wlc*wldj+zds*zddj)<< " Yuan."<<endl;
}
}
����//��������
*/
#include <iostream>
using namespace std;
double fwlc(double);
double fzds(double,double);
const double zddj=167.5;//�ߵ�����
const double wldj=36.4;//Χ������
const double pi=3.14;//����Բ����
int main(){
    double r;//��ֱ��
    double c;//�ߵ���
    double wlc;//Χ������
    double zds;//�ߵ����
    int i;
    for(i=1;i<=5;i++)
    {  
        cout<<"�������"<<i<<"����Ӿ������(ֱ�����ߵ���):";
        cin>>r>>c;
        wlc=fwlc(r); //�������ã����ڼ���Χ�����ȣ�
        zds=fzds(c,r); //�������ã����ڼ����ߵ����
        cout<<"The cost of No."<<i<<" is:"
        <<(wlc*wldj+zds*zddj)<< " Yuan."<<endl;
    }
}
double fwlc(double r){
    double wlc;
    r=r/2;
    wlc=2*pi*r;
    return wlc;
}
double fzds(double c,double r){
    double s;
    r=r/2;
    s=pi*(c+r)*(c+r)-pi*r*r;
    return s;
}