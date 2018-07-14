void pass()
{
	cout<<"\n\t\tPASSWORD DOES NOT CONTAINS ANY NUMBER\n\n\n";
	cout<<"\n\n\t\t\tEnter your Password\t";
	str[0]=getch();
	cout<<"*";
	str[1]=getch();
	cout<<"*";
	str[2]=getch();
	cout<<"*";
	str[3]=getch();
	cout<<"*";
	str[4]=getch();
	cout<<"*";
	str[5]='\0';
}

void again()
{
	clrscr();
		//textbackground(LIGHTBLUE);
		//(GREEN);
		cout<<"\n\t\t\t    ^^^^^^^^^^^^^^^^^^^^^^^^^^^";
		cout<<"\n\t\t\t    !=========================!\n";

		cout<<"\n\t\t\t    !=========================!";
		cout<<"\n\t\t\t    ^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\n\n\n\n";
		cout<<"  \t\t\t$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$";
		cout<<"\n\n\t\t\t*     1.NEW CUSTOMER              *";
		cout<<"\n\n\t\t\t*     2.DETAILS                   *";
		cout<<"\n\n\t\t\t*     3.SEARCH A RECORD           *";
		cout<<"\n\n\t\t\t*     4.DELETE A RECORD           *";
		cout<<"\n\n\t\t\t*     5.MODIFY A RECORD           *";
		cout<<"\n\n\t\t\t*     6.DISPLAY ALL RECORDS       *";
		cout<<"\n\n\t\t\t*     7.QUANTITY AVAILABLE        *";
		cout<<"\n\n\t\t\t*     0.EXIT                      *\n";
		cout<<"\n\t\t\t$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$";
		cout<<"\n\n\n\n\t Enter your choice :\t";
		cin>>d;
}

void switch_case()
{   do{

	switch(d)
		{
 
			case 1:
		clrscr();
		//(WHITE);
		cout<<"\n\n\n\t\t\t S.T.A.R  COMPUTERS";
		cout<<"\n\n\n\t\t\t COSUMER INFORMATION";
 
	// TO ENTER THE DETAILS OF THE COSTUMER
 
		write();
 
	// ITEMS AND THIER RATES
		start:
		cout<<"\n\n\nDO YOU WANT TO PURCHASE(Y/N):\n\n";
		cin>>pu;
		if(pu=='Y'||pu=='y')
		{
		clrscr();
 
	// PURCHASE LIST
 
		items:;
		cout<<"\n\t\t\t\t*************";
		cout<<"\n\t\t\t\tPURCHASE LIST";
		cout<<"\n\t\t\t\t*************\n\n\n\n";
		cout<<"\n\n\t\t\t1.PENDRIVE";
		cout<<"\n\n\t\t\t2.SCANNER";
		cout<<"\n\n\t\t\t3.PRINTER";
		cout<<"\n\n\t\t\t4.WEBCAM";
		cout<<"\n\n\t\t\t5.GRAPHIC CARD";
		cout<<"\n\n\t\t\t6.RAM";
		cout<<"\n\n\t\t\t7.HARD DISK";
		cout<<"\n\n\t\t\t8.WINDOWS ORIGINAL CD'S";
		cout<<"\n\n\t\t\t9.ANTIVIRUS";
		cout<<"\n\n\t\t\t10.MOUSE";
		cout<<"\n\n\n\t\t\tEnter your choice\t";
		cin>>choice;
		if(choice==1)
		{
 
	//ITEMS AND RATES
 
		bis:;
		clrscr();
		cout<<"\n\n\t\t\t\tPENDRIVES\n\n";
		cout<<"\n     ITEMS\t\t\t\t\tRATE\n";
		cout<<"\n  1. 2GB\t\t\t\t\t350\n";
		cout<<"  2. 4GB\t\t\t\t\t500\n";
		cout<<"  3. 5GB\t\t\t\t\t700\n";
		cout<<"  4. 8GB\t\t\t\t\t800\n";
		cout<<"  5. 16GB\t\t\t\t\t1800\n";
		cout<<"  6. 32GB\t\t\t\t\t2400\n";
		cout<<"  7. 64GB\t\t\t\t\t3000\n";
		cout<<"\n\n\tWhich PENDRIVE you want to purchase\t";
		cin>>p1;
		if(p1==1)
		{
		pend=350;
		}
		else if(p1==2)
		{
		pend=500;
		}
		else if(p1==3)
		{
		pend=700;
		}
		else if (p1==4)
		{
		pend=800;
		}
		else if(p1==5)
		{
		pend=1800;
		}
		else if(p1==6)
		{
		pend=2400;
		}
		else if(p1==7)
		{
		pend=3000;
		}
		else if(p1==0)
		{
		goto items;
		}
		else if(p1!=1||p1!=2||p2!=3||p1!=4||p1!=5||p1!=6||p1!=7)
		{
		cout<<"\n\n\tOOPS!!!!!!!  Wrong choice\n\n";
		getch();
		goto bis;
		}
		cout<<"\n\tPENDRIVE(MAX 5): \t";
		cin>>m;
		if(m>5)
		{
		cout<<"\n\n\tEnter Quantity Smaller than 5";
		getch();
		goto items;
		}
		else
		abis=1000-m;
		cout<<"\n\tDO you want to purchase more(y/n)";
		cin>>yes;
		if(yes=='y')
		{
		clrscr();
		goto items;
		}
		else
		{
		clrscr();
		goto cash;
		}
		}
		if(choice==2)
		{
		pep:;
		clrscr();
		cout<<"\n\n\t\t\t\tSCANNER\n\n";
		cout<<"\n    ITEMS\t\t\t\tRATE\n";
		cout<<"\n  1.FLATBED\t\t\t\t5000\n";
		cout<<"  2.SHETFED\t\t\t\t6000\n";
		cout<<"  3.PHOTO SCANNER\t\t\t4500\n";
		cout<<"  4.FILM SCANNER\t\t\t8000\n";
		cout<<"  5.PORTABLE SCANNER\t\t\t10000\n";
		cout<<"\n\n\tWhich SCANNER do you want to purchase\t";
		cin>>scan;
		if(scan==1)
		{
		asc=5000;
		}
		else if(scan==2)
		{
		asc=6000;
		}
		else if(scan==3)
		{
		asc=4500;
		}
		else if(scan==4)
		{
		asc=8000;
		}
		else if(scan==5)
		{
		asc=10000;
		}
		else if(scan==0)
		{
		goto items;
		}
		else if(scan!=1||scan!=2||scan!=3||scan!=4||p1!=5)
		{
		cout<<"\n\n\tOOPS!!!!!!!  Wrong choice\n\n";
		getch();
		goto pep;
		}
		cout<<"\n\n\tSCANNER(MAX 5):\t ";
		cin>>n;
		if(n>5)
		{
		cout<<"\n\n\tEnter Quantity Smaller than 5";
		getch();
      goto items;
		}
		else
		apep=1000-n;
		cout<<"\n\tDO you want to purchase more(y/n)";
		cin>>yes;
		if(yes=='y')
		{
		clrscr();
		goto items;
		}
		else
		{
		clrscr();
		goto cash;
		}
		}
		if(choice==3)
		{
		den:;
		clrscr();
		cout<<"\n\n\t\t\t\tPRINTER\n\n";
		cout<<"\n     ITEMS\t\t\t\tRATE\n";
		cout<<"\n  1. HP Laser jet\t\t\t2000\n";
		cout<<"  2. DOT Matrix Printer\t\t\t500\n";
		cout<<"\n\n\tWhich PRINTER you want to purchase\t";
		cin>>p2;
		if(p2==1)
		{
		print=500;
		}
		else if(p2==2)
		{
		print=2000;
		}
		else if(p2==0)
		{
		goto items;
		}
		else if(p2!=1||p2!=2)
		{
		cout<<"\n\n\tOOPS!!!!!!!  Wrong choice\n\n";
		getch();
		goto den;
		}
		cout<<"\n\tPRINTER(MAX 5):\t ";
		cin>>o;
		if(o>5)
		{
		cout<<"\n\n\tEnter Quantity Smaller than 5";
      goto items;
		}
		else
		aden=110-o;
		cout<<"\n\tDO you want to purchase more(y/n)";
		cin>>yes;
		if(yes=='y')
		{
		clrscr();
		goto items;
		}
		else
		{
		clrscr();
		goto cash;
		}
		}
		if(choice==4)
		{
		mun:;
		clrscr();
		cout<<"\n\n\t\t\t\tWEBCAM\n\n";
		cout<<"\n    ITEMS\t\t\t\t\tRATE\n";
		cout<<"\n  1.5 PIXEL\t\t\t\t\t1500\n";
		cout<<"  2.8 PIXEL\t\t\t\t\t6000\n";
		cout<<"  3.12 PIXEL\t\t\t\t\t12000\n";
		cout<<"\n\n\tWhich WEBCAM you want to purchase\t";
		cin>>web;
		if(web==1)
		{
		aweb=1500;
		}
		else if(web==2)
		{
		aweb=6000;
		}
		else if(web==3)
		{
		aweb=12000;
		}
		else if(web==0)  goto items;
		
		else if(web!=1||web!=2||web!=3)
		{
		  cout<<"\n\n\tOOPS!!!!!!!  Wrong choice\n\n";
		  getch();
		  goto mun;
		}
		cout<<"\n\n\tWEBCAM(MAX 5):\t ";
		cin>>p;
		if(p>5)
		{
		  cout<<"\n\n\tEnter Quantity Smaller than 5";
		  getch();
		  goto items;
        }
		else
		amun=1000-p;
		cout<<"\n\tDO you want to purchase more(y/n)";
		cin>>yes;
		if(yes=='y')
		{
		  clrscr();
		  goto items;
		}
		else
		 {
		  clrscr();
		  goto cash;
		 }
		}
		if(choice==5)
		{
		  park:;
		  clrscr();
		  cout<<"\n\n\t\t\t\tGRAPHIC CARD\n\n";
		  cout<<"\n     ITEMS\t\t\t\t\tRATE\n";
		  cout<<"\n  1. 32 bit\t\t\t\t\t5000\n";
		  cout<<"  2. 64 bit\t\t\t\t\t8000\n";
		  cout<<"\n\n\tWhich GRAPHICS CARD you want to purchase\t";
		  cin>>g1;
		  if(g1==1) graph=5000;
		  else if(g1==2) graph=8000;
		  else if(g1==0)  goto items;
		  else if(g1!=1||g1!=2)
		 {
		   cout<<"\n\n\tOOPS!!!!!!!  Wrong choice\n\n";
		   getch();
		   goto park;
		 }
		cout<<"\n\tGRAPHIC CARD(MAX 5):\t ";
		cin>>q;
		if(q>5)
		{
		 cout<<"\n\n\tEnter Quantity Smaller than 5";
		 getch();
		 goto items;
		}
		else
		aperk=500-q;
		cout<<"\n\tDO you want to purchase more(y/n)";
		cin>>yes;
		if(yes=='y')
		{
		clrscr();
		goto items;
		}
		else
		 {
		 clrscr();
		 goto cash;
		 }
		}
		if(choice==6)
		{ flag=1;
		  do{
		  clrscr();
		  cout<<"\n\n\t\t\t\tRAM\n\n";
		  cout<<"\n     ITEMS\t\t\t\t\tRATE\n";
		  cout<<"\n  1. 1GB\t\t\t\t\t2000\n";
		  cout<<"  2. 2GB\t\t\t\t\t4000\n";
		  cout<<"\n\n\tWhich RAM you want to purchase\t";
		  cin>>r1;
		  if(r1==1) ram=2000;
	      else if(r1==2)  ram=4000;
		  else if(r1==0)  goto items;
          else if(r1!=1||r1!=2)
		   {
		     cout<<"\n\n\tOOPS!!!!!!!  Wrong choice\n\n";
		     getch();
		     flag=0;
		   }
		  }while(flag==0) 
		cout<<"\n\tRAM(MAX 2): ";
		cin>>r;
		if(r>2)
		 {
		  cout<<"\n\n\tEnter Quantity Smaller than 2";
		  getch();
          goto items;
		 }
		else
		acoc=400-r;
		cout<<"\n\tDo you want to purchase more(y/n)";
		cin>>yes;
		if(yes=='y')
		 {
		  clrscr();
		  goto items;
		 }
		 else
		  {
		   clrscr();
		   goto cash;
		  }
		}
		if(choice==7)
		{
		titan:;
		clrscr();
		cout<<"\n\n\t\t\t\tHARD DISK\n\n";
		cout<<"\n     ITEMS\t\t\t\t\tRATE\n";
		cout<<"\n  1. 20GB\t\t\t\t\t1500\n";
		cout<<"  2. 50GB\t\t\t\t\t2000\n";
		cout<<"  3. 80GB\t\t\t\t\t3000\n";
		cout<<"  4. 160GB\t\t\t\t\t5000\n";
		cout<<"  5. 320GB\t\t\t\t\t8000\n";
		cout<<"\n\n\tWhich HARD DISK you want to purchase\t";
		cin>>h1;
		if(h1==1)
		hard=1500;
		else if(h1==2)
		hard=2000;
		else if(h1==3)
		hard=3000;
		else if(h1==4)  hard=5000;
		else if(h1==5)  hard=8000;
		else if(h1==0)  goto items;
		else if(h1!=1||h1!=2||h1!=3||h1!=4||h1!=5)
		{
		cout<<"\n\n\tOOPS!!!!!!!  Wrong choice\n\n";
		getch();
		goto titan;
		}
		cout<<"\n\tHARD DISK(MAX 5):\t ";
		cin>>s;
		if(s>5)
		{
		cout<<"\n\n\tEnter Quantity Smaller than 5";
		getch();
      goto items;
		}
		else
		atit=100-s;
		cout<<"\n\tDO you want to purchase more(y/n)";
		cin>>yes;
		if(yes=='y')
		{
		clrscr();
		goto items;
		}
		else
		{
		clrscr();
		goto cash;
		}
 
		}
		if(choice==8)
		{
		lux:;
		clrscr();
		cout<<"\n\n\t\t\t\tMICROSOFT WINDOWS 10\n\n";
		cout<<"\n     ITEMS\t\t\t\tRATE\n";
		cout<<"\n  1. 98\t\t\t\t\t1500\n";
		cout<<"  2. 2000\t\t\t\t2000\n";
		cout<<"  3. XP\t\t\t\t\t4000\n";
		cout<<"  4. VISTA\t\t\t\t8000\n";
		cout<<"  5. windows7\t\t\t\t11000\n";
		cout<<"\n\n\tWhich WINDOWS CD you want to purchase\t";
		cin>>w1;
		if(w1==1)
		{
		win=1500;
		}
		else if(w1==2)
		{
		win=2000;
		}
		else if(w1==3)
		{
		win=4000;
		}
		else if(w1==4)
		{
		win=8000;
		}
		else if(w1==5)
		{
		win=11000;
		}
		else if(w1==0)
		{
		goto items;
		}
		else if(w1!=1||w1!=2||w1!=3||w1!=4||w1!=5)
		{
		cout<<"\n\n\tOOPS!!!!!!!Wrong choice\n\n";
		getch();
		goto lux;
		}
		cout<<"\n\tWINDOWS ORIGINAL CD(MAX 5):\t ";
		cin>>t;
		if(t>5)
		{
		cout<<"\n\n\tEnter Quantity Smaller than 5";
		getch();
		goto items;
		}
		else
		alux=1000-t;
		cout<<"\n\tDO you want to purchase more(y/n)";
		cin>>yes;
		if(yes=='y')
		{
		clrscr();
		goto items;
		}
		else
		{
		clrscr();
		goto cash;
		}
		}
		if(choice==9)
		{
		tid:;
		clrscr();
		cout<<"\n\n\t\t\t\tANTIVIRUS\n\n";
		cout<<"\n     ITEMS\t\t\t\tRATE\n";
		cout<<"\n  1. NORTON\t\t\t\t1500\n";
		cout<<"  2. AVIRA\t\t\t\t1200\n";
		cout<<"  3. QUICKHEAL\t\t\t\t1300\n";
		cout<<"\n\n\tWhich ANTIVIRUS you want to purchase\t";
		cin>>an1;
		if(an1==1)
		{
		ant=1500;
		}
		else if(an1==2)
		{
		ant=1200;
		}
		else if(an1==3)
		{
		ant=1300;
		}
		else if(an1==0)
		{
		goto items;
		}
		else if(an1!=1||an1!=2||an1!=3)
		{
		cout<<"\n\n\tOOPS!!!!!!!Wrong choice\n\n";
		getch();
		goto tid;
		}
		cout<<"\n\tANTI VIRUS(MAX 5): ";
		cin>>u;
		if(u>5)
		{
		cout<<"\n\n\tEnter Quantity Smaller than 5";
		getch();
		goto items;
		}
		else
		atid=1000-u;
		cout<<"\n\tDO you want to purchase more(y/n)";
		cin>>yes;
		if(yes=='y')
		{
		clrscr();
		goto items;
		}
		else
		{
		clrscr();
		goto cash;
		}
		}
		if(choice==10)
		{
		ree:;
		clrscr();
		cout<<"\n\n\t\t\t\tMOUSE\n\n";
		cout<<"\n    ITEMS\t\t\t\tRATE\n";
		cout<<"\n  1.BALL MOUSE\t\t\t\t150\n";
		cout<<"  2.LASER MOUSE\t\t\t\t300\n";
		cout<<"\n\n\tWhich MOUSE do you want to purchase\t";
		cin>>mous;
		if(mous==1)         mo=150;
		else if(mous==2)    mo=300;	
		else if(mous==0)    goto items;
		else if(mous!=1||mous!=2)
		{
		  cout<<"\n\n\tOOPS!!!!!!!Wrong choice\n\n";
		  getch();
		  goto ree;
		}
		cout<<"\n\tMOUSE(MAX 2):\t ";
		cin>>v;
		if(v>2)
		{
		  cout<<"\n\n\tEnter Quantity Smaller than 2";
		  getch();
		  goto items;
		}
		else
		aree=300-v;
		cout<<"\n\tDo you want to purchase more(y/n)";
		cin>>yes;
		if(yes=='y')
		{
		clrscr();
		goto items;   //GO BACK TO PURCHASE LIST
		}
		else
		 {
		    clrscr();
		    goto cash;    //TO DISPLAY BILL
		 }
		
		}
		cout<<"\n\n\n";
		clrscr();
		cash:;
		cout<<"\n\n\n\n\n\n\t\t\t\t KAD COMPUTERS\n";
		cout<<"\n\n\t\t\t\t    CASH MEMO\n\n\n\n\n\n\n\n\n";
 
      //TO DISPLAY THE INFORMATION OF THE CUSTOMER
       c.display();
 	  //TO DISPLAY THE CASH MEMO
 		cout<<"\n\n\n\n";
		cout<<"===============================================================================";
		cout<<"\nITEMS"            <<setw(40)<<"QUANTITY"<<setw(35)<<"PRICE(Rs.)";
		cout<<"===============================================================================";
		if(m>0)
		cout<<"\n\nPENDRIVE"                       <<setw(35)<<m<<setw(28)<<"Rs."<<m*pend;
		if(n>0)
		cout<<"\n\nSCANNER"                        <<setw(36)<<n<<setw(28)<<"Rs."<<n*asc;
		if(o>0)
		cout<<"\n\nPRINTER"                        <<setw(36)<<o<<setw(28)<<"Rs."<<o*print;
		if(p>0)
		cout<<"\n\nWEBCAM"                         <<setw(37)<<p<<setw(28)<<"Rs."<<p*aweb;
		if(q>0) 
		cout<<"\n\nGRAPHICS PROCESSING UNIT"       <<setw(31)<<q<<setw(28)<<"Rs."<<q*graph;
		if(r>0)
		cout<<"\n\nRAM"                            <<setw(40)<<r<<setw(28)<<"Rs."<<r*ram;
		if(s>0)
		cout<<"\n\nHARD DISK"                      <<setw(34)<<s<<setw(28)<<"Rs."<<s*hard;
		if(t>0)
		cout<<"\n\nMICROSOFT WINDOWS 10"           <<setw(24)<<t<<setw(28)<<"Rs."<<t*win;
		if(u>0)
		cout<<"\n\nANTIVIRUS"                      <<setw(34)<<u<<setw(28)<<"Rs."<<u*ant;
		if(v>0)
		cout<<"\n\nMOUSE"                          <<setw(38)<<v<<setw(28)<<"Rs."<<v*mo;
			e=m*pend;
			f=n*asc;
			g=o*print;
			h=p*aweb;
			k=q*graph;
			l=r*ram;
			w=s*hard;
			x=t*win;
			y=u*ant;
			z=v*mo;
		   sum=e+f+g+h+k+l+w+x+y+z;     //TOTAL BILL
		   add=m+n+o+p+q+r+s+t+u+v;     //QUANTITY OF ITEMS
		cout<<"\n===============================================================================";
		cout<<"\nTOTAL:"<<setw(38)<<add<<setw(27)<<"Rs."<<sum;
		money:;
		cout<<"\n\n\n\n\t\t\tEnter the cash paid\t";
		cin>>total;
		cout<<"\n\n\n\t\t\tCASH RECIEVED :"<<total;
		if(total<sum)
		{
		cout<<"\n\n\tThe money you paid is less !!!! Please pay more money";
		getch();
		goto money;
		}
		clrscr();
		cout<<"\n\n\n\n\n\t NO CREDIT OF THE ADDITIONAL DUTY OF";
		cout<<"\n\n\t   CUSTOMS LEVIED UNDER SECTION (5) OF";
		cout<<"\n\n\t   SECTION-3 OF THE CUSTOMS TARIFF ACT";
		cout<<"\n\n\t  1975 HAVE BEEN AVAILED/SHALL BE ADMISSABLE\n\n";
		cout<<"\n\n\n\n\n\t\tCASH RECEIVED :\t"<<total;
		cout<<"\n\n\t\tCASH AMOUNT :\t"<<sum;
		cout<<"\n\n\t\tBALANCE RETURNED :\t"<<total-sum;
		cout<<"\n\n\tTHANK YOU .\t\t\t\tVISIT US AGAIN\n";
		cout<<"\n\n\tTHANK YOU FOR USING OUR SERVICE\n\n";
		getch();
		again();
		}
		else
		{
		clrscr();
		getch();
		again();
		}
			break;
			case 2:

		//TO DISPLAY THE CANTEEN DETAILS
 
		clrscr();
		cout<<"\n\n\n\n\n\t\t\t\tSHOP DETAILS\n\n\n";
		cout<<"\n\t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n\n";
		cout<<"\t\t  #   TIMING: 11 AM TO 02 PM & 03 PM TO 05 PM                    \n";
		cout<<"\t\t  #   SHOP WILL CLOSED ON TUESDAY.                               \n";
		cout<<"\t\t  #   GOODS ONCE SOLD WILL NOT BE EXCHANGED/REPLACED.            \n";
		cout<<"\t\t  #   TAKE YOUR SMART CARD WITH YOU.                             \n";
		cout<<"\t\t  #   COLLECT YOUR SMART CARD & BILL AFTER PAYMENT.              \n";
		cout<<"\t\t  #   DO NOT BREAK ANY SHOP ITEMS.                               \n";
		cout<<"\t\t  #   FOR ANY COMPLAINT CONTACT THE CHAIR PERSON.                \n";
		cout<<"\t\t  #   25 YEARS OF EXPERIENCE.                                    \n";
		cout<<"\t\t  #   CHAIR PERSON :- MR. BHAVISHAY NIGAM.                       \n";
		cout<<"\t\t  #   AN ISO 9001-2000 CERTIFIED COMPANY.                        \n";
		cout<<"\t\t  #   WELL QUALIFIED STAFF MEMBERS.                              \n";
		cout<<"\t\t  #   Email :- www.star_computers.com                            \n";
		cout<<"\n\t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n\n";
		getch();
		clrscr();
		again();
 
	 case 3:
 
		//TO SEARCH THE RECORDS

		clrscr();
		search();
		getch();
		again();
		break;
 
	 case 4:
 
		//TO DELETE THE RECORDS
 
		clrscr();
		del();
		getch();
		again();
 break;
	 case 5:
 
		//TO MODIFY THE RECORDS
 
		clrscr();
		update();
		getch();
		again();
 break;
	 case 6:
 
		//TO DISPLAY ALL SAVED RECORDS
 
		{
		clrscr();
		read();
		getch();
		again();
		}
 break;
	 case 7:
 
		//TO DISPLAY THE QUANTITY AVAILABLE IN THE SHOP
 
		clrscr();
		if(m>0||n>0||o>0||p>0||q>0||r>0||s>0||t>0||u>0||v>0)
		{
		cout<<"\n\t\t\tItems Avaliable in shop.\n\n\n";
		cout<<"===============================================================================";
		cout<<"\nITEMS"            <<setw(40)<<"QUANTITY";
		cout<<"\n===============================================================================";
		cout<<"\n\n\nPENDRIVE"            <<setw(37)<<abis;
		cout<<"\n\n\nSCANNER"             <<setw(38)<<apep;
		cout<<"\n\n\nPRINTER"             <<setw(38)<<aden;
		cout<<"\n\n\nWEBCAM"              <<setw(39)<<amun;
		cout<<"\n\n\nGRAPHIC CARD"        <<setw(33)<<aperk;
		cout<<"\n\n\nRAM"                 <<setw(42)<<acoc;
		cout<<"\n\n\nHARD DISK"           <<setw(35)<<atit;
		cout<<"\n\n\nWINDOWS ORIGINAL CD" <<setw(26)<<alux;
		cout<<"\n\n\nANTIVIRUS"           <<setw(36)<<atid;
		cout<<"\n\n\nMOUSE"               <<setw(40)<<aree;
		cout<<"\n*******************************************************************************";
		getch();
		again();
		}
		else
		{
		cout<<"\n\t\t\tItems Avaliable in shop.\n\n\n";
		cout<<"===============================================================================";
		cout<<"\nITEMS"            <<setw(40)<<"QUANTITY";
		cout<<"\n===============================================================================";
		cout<<"\n\n\nPENDRIVE"             <<setw(37)<<1000;
		cout<<"\n\n\nSCANNER"              <<setw(38)<<1000;
		cout<<"\n\n\nPRINTER"        	   <<setw(37)<<110;
		cout<<"\n\n\nWEBCAM"               <<setw(39)<<1000;
		cout<<"\n\n\nGRAPHIC CARD"         <<setw(32)<<500;
		cout<<"\n\n\nRAM"                  <<setw(41)<<400;
		cout<<"\n\n\nHARD DISK"            <<setw(35)<<100;
		cout<<"\n\n\nWINDOWS ORIGINAL CD"  <<setw(26)<<1000;
		cout<<"\n\n\nANTIVIRUS"            <<setw(36)<<1000;
		cout<<"\n\n\nMOUSE"                <<setw(39)<<300;
		cout<<"\n\n*******************************************************************************";
		getch();
		again();
		}
break;
	 case 0:

		//TO EXIT FROM THE PROGRAM
		clrscr();
		cout<<"\n\n\n\t\tARE YOU SURE TO EXIT FROM THE PROGRAM (yes/no)\t";
		gets(con);
		if(strcmpi(con,"yes")==0)
		 goto ex;
		else if(strcmpi(con,"no")==0)
		 again();
		else
		 goto else1;
		clrscr();
		gotoxy(35,10);
		cout<<" THANKS FOR USING THIS SERVICE	";
		exit(0);
break;
     default:
    	cout<<" Please enter a valid option."
    	flag=0;
}//end of switch
}while(flag==0)
}
void ex()
{
		clrscr();
		gotoxy(35,10);
		cout<<" THANKS FOR USING THIS SERVICE	";
		exit(0);
}
void else1()
{
	cout<<"OOPS!!!!!!!! Your choice is WRONG";
	getch();
	again();
	break;
}