#include <stdio.h>
#include <windows.h>

int main()
{
   puts("Hello, World!");
   printf("Hello, World!\n");
   {
      const double pi = 3.14;
      printf("Pi = %.10f\n", pi);
   }
   MessageBox
   (  NULL
   ,  "������, �� ������� - ��� ������ ������ ���������� ����������� ����. "
      "������ MSDN: ms-help://MS.VSCC.v90/MS.MSDNQTR.v90.en/winui/winui/windowsuserinterface/windowing/dialogboxes/dialogboxreference/dialogboxfunctions/messagebox.htm"
   ,  "��������� ���������� ����"
   ,  MB_OK | MB_ICONINFORMATION
   );
}

