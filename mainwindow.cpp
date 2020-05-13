#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPainter>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

//记得做批注
void MainWindow::paintEvent(QPaintEvent *)
{

    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing, true);
    // 反走样
      painter.fillRect(0,0,width(),height(),QColor(220,157,98,150));//设置背景
    painter.setPen(QPen(QColor(195, 0,0,0), 2));
    // 设置画笔颜色、宽度

    painter.setBrush(QColor(230,10,10));
    painter.drawEllipse(QPointF(150, 150), 50, 50);

    painter.setBrush(QColor(255,250,255));
    painter.drawEllipse(QPointF(150, 150), 40, 40);

    painter.setPen(QPen(QColor(230, 0,0,0), 2));
    painter.setBrush(QColor(230,0,0));
    painter.drawEllipse(QPointF(150, 150), 30, 30);

    painter.setBrush(QColor(0, 0,255));
    painter.drawEllipse(QPointF(150, 150), 21.7, 21.7);

    painter.setBrush(QColor(255,255,255));
    painter.setPen(QColor(0, 160, 230,100));

   static const QPointF points1[10] = {
        QPointF(150.3, 171.7),
        QPointF(154.6, 158.5),
        QPointF(169.9, 158.6),
        QPointF(157.7, 149.2),
        QPointF(163.1,132.3),
        QPointF(149.8, 143.1),
        QPointF(136.9, 132.3),
        QPointF(142.2, 148.9),
        QPointF(130.1, 158.6),
        QPointF(145.6,158.5),
    };


   painter.drawPolygon(points1, 10);
     // 五角星

    QRadialGradient radialGradient3(QPointF(150, 150),50,QPointF(190,130));
    radialGradient3.setColorAt(0, QColor(225, 255, 255));
    radialGradient3.setColorAt(1, QColor(255,255, 255,0));
    painter.setBrush(radialGradient3);
      painter.setPen(QColor(0, 160, 230,0));
    painter.drawEllipse(QPointF(150, 150),50, 50);
    //


    //美队至此
    //蝙蝠侠出场
    painter.setBrush(QBrush(Qt::yellow));
     painter.setPen(QPen(QColor(0, 0,0),5));
    painter.drawEllipse(QPointF(346, 155), 80, 40);

    painter.setBrush(QColor(0,0,0));
    painter.setPen(QColor(0, 0, 0));
double a=3;
int b=230;
int c=100;
   static  QPointF points2[34] = {
        QPointF(350/a+b, 129.6/a+c),
        QPointF(339.7/a+b, 128.8/a+c),
        QPointF(329.9/a+b, 109.8/a+c),
        QPointF(325.4/a+b, 150/a+c),
        QPointF(261.4/a+b,150/a+c),
        QPointF(229.9/a+b, 139.9/a+c),
        QPointF(220.4/a+b, 120.9/a+c),
        QPointF(229.4/a+b, 100/a+c),
        QPointF(189.7/a+b, 109.8/a+c),
        QPointF(170.3/a+b,169.6/a+c),

       QPointF(160.3/a+b, 228.8/a+c),
       QPointF(179.9/a+b, 200/a+c),
       QPointF(200.2/a+b, 200/a+c),
       QPointF(200.8/a+b, 210.9/a+c),
       QPointF(220.1/a+b,200.5/a+c),
       QPointF(260/a+b, 190.5/a+c),
       QPointF(319.6/a+b, 209.3/a+c),
       QPointF(350/a+b, 229.9/a+c),

         QPointF(380.4/a+b, 209.3/a+c),
         QPointF(440/a+b, 190.5/a+c),
        QPointF(479.9/a+b,200.5/a+c),
       QPointF(499.2/a+b, 210.9/a+c),
      QPointF(499.8/a+b, 200/a+c),
        QPointF(520.1/a+b, 200/a+c),
        QPointF(539.7/a+b, 228.8/a+c),
       QPointF(529.7/a+b,169.6/a+c),
       QPointF(510.3/a+b, 109.8/a+c),
       QPointF(470.6/a+b, 100/a+c),
       QPointF(479.6/a+b, 120.9/a+c),
        QPointF(470.1/a+b, 139.9/a+c),
       QPointF(438.6/a+b, 150/a+c),
       QPointF(374.6/a+b,150/a+c),
       QPointF(370.1/a+b, 109.8/a+c),
       QPointF(360.3/a+b, 128.8/a+c),

    };

    painter.drawPolygon(points2, 34);
    //蝙蝠侠至此
    //iron man

    painter.setPen(QPen(QColor(0, 0,200,250), 5));
    // 设置画笔颜色、宽度

    painter.setBrush(QColor(255,255,255,0));
    painter.drawEllipse(QPointF(550, 155), 50, 50);

    QRadialGradient radialGradient(QPointF(550, 155),50,QPointF(550,155));
    radialGradient.setColorAt(1, QColor(225,225,225));
     radialGradient.setColorAt(0.666, QColor(0,0, 255,100));
     radialGradient.setColorAt(0.333, QColor(225,225, 255));
    radialGradient.setColorAt(0, QColor(0, 0, 225,200));
    painter.setBrush(radialGradient);
    painter.drawEllipse(QPointF(550, 155), 50, 50);



    painter.setPen(QPen(QColor(10, 10,105),4));

   static const QPointF points3[3] = {
        QPointF(550, 205),
        QPointF(593.3,130 ),
        QPointF(506.7,130 ),

    };

painter.drawPolygon(points3, 3);
QPen pen;

pen.setWidth(5);//重置线宽
pen.setColor(Qt::darkBlue); //重置颜色
pen.setCapStyle(Qt::RoundCap);//重置风格
painter.setPen(pen);//重新使用画笔
int kk=10,rr=550,ll=155;
painter.drawLine(575.8, 197.9, 564.7, 179.5);
painter.drawLine(5*kk+rr, 0.09*kk+ll, 2.86*kk+rr, 0.05*kk+ll);
painter.drawLine(2.42*kk+rr,-4.38*kk+ll,1.38*kk+rr , -2.5*kk+ll);
painter.drawLine(-2.42*kk+rr,-4.38*kk+ll,-1.38*kk+rr, -2.5*kk+ll);
painter.drawLine(-5*kk+rr, 0.09*kk+ll, -2.86*kk+rr, 0.05*kk+ll);
painter.drawLine(-2.58*kk+rr, 4.29*kk+ll, -1.47*kk+rr, 2.45*kk+ll);

painter.drawLine(0*kk+rr,5*kk+ll,0*kk+rr, 3.02*kk+ll);
painter.drawLine(-2.35*kk+rr, -1.46*kk+ll, -4.33*kk+rr, -2.5*kk+ll);
painter.drawLine(2.49*kk+rr, -1.40*kk+ll, 4.33*kk+rr, -2.5*kk+ll);

 painter.setPen(QPen(QColor(10, 10,145),6));
static const QPointF points4[3] = {
     QPointF(0*kk+rr,3.02*kk+ll),
     QPointF( -2.35*kk+rr, -1.46*kk+ll),
     QPointF( 2.49*kk+rr, -1.40*kk+ll),

 };

painter.drawPolygon(points4, 3);
//iron man done
//next,spider man

//
QRadialGradient radialGradient2(QPointF(740, 155),60,QPointF(740,155));
radialGradient2.setColorAt(0, QColor(225, 0, 0,0));
radialGradient2.setColorAt(0, QColor(225, 0, 0,150));
radialGradient2.setColorAt(1, QColor(150,0, 0));
painter.setBrush(radialGradient2);
painter.setPen(QPen(QColor(0, 0,0,255),2));
painter.drawEllipse(QPointF(740, 155), 60, 60);
//
kk=5,rr=740,ll=145;
painter.setBrush(QColor(0,0,0));
painter.setPen(QPen(QColor(0, 0,0),2));
static const QPointF points5[9] = {
    QPointF(-1.06*kk+rr,-3.07*kk+ll),
    QPointF( -2.06*kk+rr, -1.11*kk+ll),
    QPointF(-0.95*kk+rr, -0*kk+ll),
    QPointF(-1.96*kk+rr,2.01*kk+ll),
    QPointF( 0.13*kk+rr, 8.84*kk+ll),

     QPointF(1.96*kk+rr,2.01*kk+ll),
    QPointF(0.95*kk+rr, 0*kk+ll),
     QPointF( 2.06*kk+rr, -1.11*kk+ll),
     QPointF(1.06*kk+rr,-3.07*kk+ll),

};
painter.drawPolygon(points5, 9);

kk=-5;
painter.setPen(QPen(QColor(0, 0,0),2));

painter.drawLine(-1.53*kk+rr, 2.15*kk+ll, -2.06*kk+rr, 3.02*kk+ll);
painter.drawLine(-2.06*kk+rr,1.11*kk+ll,-2.43*kk+rr , 2.2*kk+ll);
painter.drawLine(-1.2*kk+rr,0.25*kk+ll,-2.78*kk+rr, 0.5*kk+ll);
painter.drawLine(-1.51*kk+rr,-1.11*kk+ll,-3.23*kk+rr, -2.65*kk+ll);

painter.drawLine(1.53*kk+rr, 2.15*kk+ll, 2.06*kk+rr, 3.02*kk+ll);
painter.drawLine(2.06*kk+rr,1.11*kk+ll,2.43*kk+rr , 2.2*kk+ll);
painter.drawLine(1.2*kk+rr,0.25*kk+ll,2.78*kk+rr, 0.5*kk+ll);
painter.drawLine(1.51*kk+rr,-1.11*kk+ll,3.23*kk+rr, -2.65*kk+ll);

painter.setPen(QPen(QColor(0, 0,0),4));
painter.drawLine(-4.2*kk+rr, 3.02*kk+ll, -2.06*kk+rr, 3.02*kk+ll);
painter.drawLine(-5.5*kk+rr,1.14*kk+ll,-2.43*kk+rr , 2.2*kk+ll);
painter.drawLine(-6.06*kk+rr,-1.32*kk+ll,-2.78*kk+rr, 0.5*kk+ll);
painter.drawLine(-2.25*kk+rr,-11.38*kk+ll,-3.23*kk+rr, -2.65*kk+ll);

painter.drawLine(4.2*kk+rr, 3.02*kk+ll, 2.06*kk+rr, 3.02*kk+ll);
painter.drawLine(5.5*kk+rr,1.14*kk+ll,2.43*kk+rr , 2.2*kk+ll);
painter.drawLine(6.06*kk+rr,-1.32*kk+ll,2.78*kk+rr, 0.5*kk+ll);
painter.drawLine(2.25*kk+rr,-11.38*kk+ll,3.23*kk+rr, -2.65*kk+ll);

painter.setPen(QPen(QColor(0, 0,0),1.9));
painter.drawLine(-4.2*kk+rr, 3.02*kk+ll, -3.33*kk+rr, 6.72*kk+ll);
painter.drawLine(-5.5*kk+rr,1.14*kk+ll,-4.71*kk+rr , 7.12*kk+ll);
painter.drawLine(-6.06*kk+rr,-1.32*kk+ll,-4.34*kk+rr, -11.19*kk+ll);
painter.drawLine(-2.25*kk+rr,-11.38*kk+ll,-1.72*kk+rr, -12.51*kk+ll);

painter.drawLine(4.2*kk+rr, 3.02*kk+ll, 3.33*kk+rr, 6.72*kk+ll);
painter.drawLine(5.5*kk+rr,1.14*kk+ll,4.71*kk+rr , 7.12*kk+ll);
painter.drawLine(6.06*kk+rr,-1.32*kk+ll,4.34*kk+rr, -11.19*kk+ll);
painter.drawLine(2.25*kk+rr,-11.38*kk+ll,1.72*kk+rr, -12.51*kk+ll);
//蜘蛛已完成
//写字



QFont font;
font.setPixelSize(24); //设置字体像素大小
font.setPointSize(15);//文字大小
font.setItalic(true);//斜体
font.setBold(true);
QString text="Captain America     Batman        Iron man       Spider-man"; //设置显示的文本
QString text2="Choose your character!";
QFontMetrics metrics(font);
int w=metrics.width(text)+10; //获取显示文本的宽度
int h=metrics.height(); //获取显示文本的高度
painter.setFont(font);
painter.setPen(Qt::red);
painter.drawText(QRect(20,220,w,h),text);
painter.drawText(QRect(320,30,w,h),text2);
//TITLE

//画边框
pen.setWidth(3); //设置线宽
pen.setColor(Qt::white); //设置颜色
pen.setStyle(Qt::SolidLine);
painter.setPen(pen);
painter.drawLine(4,16,4,height());
painter.drawLine(4,16,width(),16);

painter.end();


}

