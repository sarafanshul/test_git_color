list=[]
year,month,day=map(int,input().split())
sum=year+month+day
for i in range(0,80):
    sumx=str(sum+i)
    sum1=str(int(sumx[0])+int(sumx[1]))   #2+0=2
    sum2=str(int(sumx[2])+int(sumx[3]))   #1+1=2

    if(len(sum1)==1 and len(sum2)==1):
        total_sum=sum1+sum2
    else:
        total_sum=str(int(sum1)+int(sum2))

    if(int(total_sum)>22):
        list_num=str(int(total_sum[0])+int(total_sum[1]))
    else:
        list_num=total_sum
    list.append(int(list_num))
first_num=list[0]
bi=str(list[0])
if(len(bi)>1):
    birth_num=int(bi[0])+int(bi[1])
else:
    birth_num=int(bi)
print("생명수 : " ,first_num)
print("탄생수 : " ,birth_num)
print(list)

taro_1 ='''카드 : 바보
직업 : 여행가이드, 예술가, 모험, 등반가, 프리랜서, 자유업

본성이 자유로운 사람, 무거운 삶의 과제를 안고 살지만 단순,소박하다.
때로 미숙하고 부주의하다는 평을 듣기도 하지만 하나에 빠지면 열정적으로 몰입한다.'''

taro_2='''카드 : 마법사
직업 : 발명가, 세일즈맨, 치유사, 자영업자, 여성대상 서비스업, 동시통역, 연구개발자

재주가 있는 사람, 독창적·창조적이며 상상력이 뛰어나다.
능수능란하고 재주가 있어 꾀를 부려도 남이 잘 알아채지 못한다.'''

taro_3='''카드 : 고위 여사제
직업 : 교육자, 보모, 상담자, 종교가, 점술가, 타로마스터

지혜로운 사람, 침착·객관적이며 상황판단을 잘한다. 통찰력 있고 직관적으로 행동한다.
사람을 관념적으로 대할 수 있어 상대의 불만을 사기도 한다. 인정받고 싶어 한다.'''

taro_4='''카드 : 여황제
직업 : 금융업 종사자, 주부, 가내수공업, 텔레마켓, 작가, 미용업, 녹지조성이나 전원관련 사업

부드러운 여성, 에너지가 발달. 다른 사람을 돌보고 그들이 잘 성장할 수 있도록 돕고자 한다.
성취적 지향적·실용적이다.'''

taro_5='''카드 : 황제
직업 : 건축가, 정치인, 고위간부, 무역업, 부동산관련업, 경영자

가장의 상징으로 가진 것을 지키려 애쓰는 사람. 세속적 힘, 확신, 부유함, 안정, 권위 불굴의 정신, 호전적인 면도 있으나 이상적이다.'''

taro_6='''카드 : 신비사제
직업 : 종교, 철학자, 사제나 신부, 전문 컨설턴트, 가르치는 사람, 인수합병전문가

진리를 가르치는 일에 관심이 있는 교육자의 상징이다.
자비롭고 친절하며 전통이나 의식을 중요하게 여기고, 오래된 생각이나 원칙을 따르고자 한다. 가끔 보수적이라는 말을 듣는다.
원칙을 따르고 존중하며 종교적인 전통을 배우려고 한다. 그리고 지식을 얻고 깊은 의미를 깨닫기 위해 노력한다.'''

taro_7='''카드 : 연인
직업 : 대인서비스직종, 예술가, 네트워크 사업가, 연애코치, 결혼소개업, 연예인, 사회사업가, 자선사업가, 패션, 헤어디자이너

인간관계가 중요한 사람이다.
사랑과 미에 대한 괸심이 높고 자신을 아름답게 잘 꾸미는 능력이 있다.
정서적으로 깊은 감정을 느끼며 다른 사람과 교류하고 싶어 한다.'''

taro_8='''카드 : 전차
직업 : 군인, 경찰, 아나운서, 강사, 전문직 종사자, 여행사, 출판사, 유통업, 홍보, 외교관

목표를 향해 나아가는 사람으로 역경을 극복하려는 의지가 있다.
내면에서 상층되는 영향력들이 있어서 마음이 혼란스러워 결정을 잘 내리지 못한다.
한 가지 일에 집중하기 보다는 여러 가지 일을 동시에 관심을 가질 때가 많으며 이 일들을 해 낼 수 있는 능력도 있다.
하던 일을 성공적으로 해 내도록 마음의 변화에 귀를 기울일 필요가 있다.'''

taro_9='''카드 : 힘
직업 : 조련사, 교육자, 트레이너, 감독, 코치, 운동선수, 치과의사, 수의사, 미용업, 간병인

의유내강형의 사람이다.
화난 사람을 진정시킬 수 있는 방법을 알고 있는 사람이다.
내적인 용기와 결단력, 자기 확신과 도전적인 성향을 갖고 있다.
내면의 두려움과 맞서야 할 과제를 안고 있다.'''

taro_10='''카드 : 은둔자
직업 : 의사, 교수, 수도승, 탐험가, 사색가, 철학가, 기공사, 천문학자, 사주상담가

관심이 내면에 있는 사람이다.
자신의 감정을 잘 억제하며, 사료 깊고 신중하며, 다른 사람에게 조언하기를 좋아한다.
행동이 빠르지 않고 고요하며 간혹 침울한 성격으로 발전하는 사람도 있다.'''

taro_11='''카드 : 운명의 수레바퀴
직업 : (돈을 회전 시키는)투자가, 운송업, 엔터테인먼트 사업, 가업을 잇는 것, 영화 영상, 파트타임, 기계공학, 생명공학, 자동차공학, 생물, 미생물

재주 있는 사람이다. 행위의 결과가 자신에게 돌아오니 행동을 잘하며 살아갈 필요가 있다.
진리라고 생각하는 분야를 배워서 타인에게 가르치거나 혹은 공공의 이익을 위해 사용할 필요가 있다.'''

taro_12='''카드 : 정의
직업 : 법조인, 중개인, 분석, 평가와 감정, 에이전시, 임상병리, 회계사

공평무사한 사람이다. 적당한 균형과 조화를 이루고자하는 성격이다.
마음의 평정심을 찾은 사람.
분별력이 있고 판단을 한 다음에는 실천이 빠르다.
올바른 미덕과 명예를 중요시 한다.
대인관계에서 옳고 그름이 앞서니 정서적인 면을 간과할 우려가 있다.'''

taro_13='''카드 : 거꾸로 매달린 사람
직업 : 심리학자, 연구가, 정신과 전문의, 사회봉사가, 의료관련 종사자, 스턴트맨

말과 행동이 다른 사람에 비해 느리다.
둔감한 편이기 때문에 정서적인 표현이 부족하다.
겉으로는 느리지만 내면에서 많은 것이 일어나는 산람이므로 서두르고 재촉하기 보다는 인내심을 가지고 지켜보는 것이 필요하다.'''

taro_14='''카드 : 죽음
직업 : 경찰, 군인, 건설(철거반), 외과의사, 장의사

변형을 일으키는 사람이다.
새로운 것을 위하여 과거의 것을 과감하게 제거하는 사람.
육체적인 죽음을 의미하는 것이 아니라, 죽음처럼 뜻밖의 변화를 일으킬 수 있는 면이 있다.
변화를 두려워 하지 않는다.'''

taro_15='''카드 : 절제
직업 : 통신회사, 외환딜러, 항공기 승무원, 해운업, 텔레마케터, 브로커, 커플매니저, 펀드매니저

마음을 잘 절제하고 인내할 줄 아는 사람.
자기 통제와 검소한 태도를 통해 목표를 달성한다.
새로운 환경에 순응하고 주변과 조화를 이루려고 한다.
큰 목표를 위해 다른 사람과 연합하여 성공적인 결합을 이룬다.
역기능적으로 발전할 경우에 빠질 가능성이 있다.'''

taro_16='''카드 : 악마
직업 : 사채업, 브로커, 마술사, 사교계, 유흥관련 종사자, 성과 위주영업, 경마, 교도관, 직장인

집착이 강한 사람이다.
자신과 관련이 있는 대상에 대하여 걱정을 많이 하고 잔소리를 많이 한다.'''

taro_17='''카드 : 탑
직업 : 성형외과, 부동산업, 우주항공, 게임, 소방공무원, 스턴트맨, 건설현장, 군사과학, 영적인 지도자, 재건축업

변화에 대한 충격을 심하게 받는 사람이다.
진실을 갑작스럽게 인식하고 그 진실과 맞지 않을 경우에 자신이 가진 것을 모두 버릴 수 있는 과감한 면이 있다.
과거의 대인 관계를 꾸준히 유지하기 보다는 변화를 추구한다.'''

taro_18='''카드 : 별
직업 : 에술가, 연예인, 디자이너(보석, 미용, 헤어, 의상), 조경사, 방송인, 창작관련, 녹색운동

어둠 속에서 희망의 등불이 되려는 사람이다.
힘들어 하는 대상에 힘이 되어 주고 싶어 한다.
신념이 있고 낙천적이며 긍정적인 생각을 많이 한다.
미래에 대한 희망을 가지고 있다.
그래서 현재 자신이 처한 어려운 상황을 간과할 우려가 있다.'''

taro_19='''카드 : 달
직업 : 집안일, 건축 점성가, 요식업, 수사관, 명상가, 천문학자, 동물, 수의사, 명상가, 최면술사

달의 모양이 변하는 것과 같이 마음이 자주 바뀌고 의심이 많이 사람이다.
자신이 너무 순수하여 남들로부터 잘 속는다고 생각한다.
자신이 내적 변화를 인정하고 즐기는 방법을 찾을 필요가 있다.'''

taro_20='''카드 : 태양
직업 : 증권, 출판업, 육아사업, 동업, 운동선수, 카피라이터, 경마, 태양열 사업 관련, 소아과의사, 고아원, 아동심리학자

어린아이와 같이 순수한 사람이다. 자신의 역량보다 더 큰 일을 해내는 용기와 믿음이 있는 사람이다.
보살핌에 대한 감사를 잊지 말고 살아야 한다.'''

taro_21='''카드 : 심판
직업 : 저널리스트, 고고학자, 아나운서, 성우, 음반, 공연, 이벤트, 목욕관련, 적십자 등 의료단체

옳고 그름에 대한 판단이 바르고 정의로운 사람이다.
옳은 일을 위해서 기끼어 희생을 감수하며 억울하거나 불쌍한 사람을 보면 적극 개입해서 도와준다.'''

taro_22='''카드 : 세계
직업 : 장식업체, 외국계회사, 패션업계, 동시통역, 홍보회사, 유엔기구, 스타일리스트, 스튜어디스, 비행사, 무역

어떠한 환경에서도 완성을 이루려는 사람이다.
완전함을 이루려는 노력 때문에 완벽주위자라는 말을 듣게 된다.
일의 한쪽 면보다 전체를 보는 경향을 있어 시야가 넓다.
가족이 도움을 구하면 자신의 일인 것처럼 적극적으로 나선다.'''

taro_dict={1:taro_1, 2:taro_2, 3:taro_3, 4:taro_4, 5:taro_5, 6:taro_6, 7:taro_7, 8:taro_8, 9:taro_9, 10:taro_10,
           11:taro_11, 12:taro_12, 13:taro_13, 14:taro_14, 15:taro_15, 16:taro_16, 17:taro_17, 18:taro_18, 19:taro_19, 20:taro_20, 21:taro_21, 22:taro_22}






