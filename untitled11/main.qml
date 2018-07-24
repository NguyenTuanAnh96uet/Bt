import Bai4 1.0
import B43 1.0
import B44 1.0
import B46 1.0
import B45 1.0
import B47 1.0
import QtQuick 2.7
import QtQuick.Controls 2.0

ApplicationWindow
{
    property int click: 0
    property int i: 0
    property int j: 0
    visible: true
    width: 640
    height: 480

    Bai4 {
        id: idBai4
    }
    B43
    {
        id:idBai43
    }
    B44
    {
        id:idBai44
    }
    B46
    {
        id:idBai46
    }
    B45
    {
        id: idBai45
    }
    B47
    {
        id: idBai47
    }

    Rectangle
    {
        x:10
      y:5
      width: 620
      height: 60
      border.color: "black"
      border.width: 3
      Button
      {
          y: 10
          x:10
          id: openMenu
          text: "Menu"
          onClicked:
          {
              for (click=0;click<100;click++)
              {
                menu.open();
              }
          }
      }
    }
    Label
    {
        id: label
        x: 150
        y: 20
        height: 30
        width: 50
        text: "hay chon bai trong Menu"
        font.pointSize: 15

    }
    Rectangle
    {   x:10
        y: 70
        width: 620
        height: 400
        border.color: "black"
        border.width: 3
    }
   Menu
    {
        id: menu
        y: openMenu.height
        MenuItem
        {
            text: "bai 1"
            onClicked:
            {
                    label.text= "nhap ngay,tinh so tuan va so nam tuong ung";
                    openMenu.text= "bai 1";
                    txtText.visible=true;
                    kqbai1.visible=true;
                    nhap.visible=true;
                    xuat.visible=true;
                    txtText1.visible=false;
                    kqbai2.visible=false;
                    txtText2.visible=false;
                    kqbai3.visible=false;
                    txtText4.visible=false;
                    kqbai6.visible=false;
                    select.visible=false;
                    txtText5.visible=false;
                    kqbai5.visible=false;
                txtText7.visible=false;
                kqbai7.visible=false;
            }
        }
        MenuItem
        {
            text: "bai 2"
            onClicked:
            {
                label.text = "in day fibonaci";
                openMenu.text= "bai 2";
                txtText1.visible=true;
                kqbai2.visible=true;
                nhap.visible=true;
                xuat.visible=true;
                txtText2.visible=false;
                kqbai3.visible=false;
                txtText4.visible=false;
                kqbai6.visible=false;
                txtText.visible=false;
                kqbai1.visible=false;
                select.visible=false;
                txtText5.visible=false;
                kqbai5.visible=false;
                txtText7.visible=false;
                kqbai7.visible=false;
            }
        }
        MenuItem
        {
            text: "bai 3"
            onClicked:
            {
                label.text = "kiem tra ki tu";
                openMenu.text= "bai 3";
                txtText2.visible=true;
                kqbai3.visible=true;
                nhap.visible=true;
                xuat.visible=true;
                txtText1.visible=false;
                kqbai2.visible=false;
                txtText4.visible=false;
                kqbai6.visible=false;
                txtText.visible=false;
                kqbai1.visible=false;
                select.visible=false;
                txtText5.visible=false;
                kqbai5.visible=false;
                txtText7.visible=false;
                kqbai7.visible=false;

            }
        }
        MenuItem
        {
            text: "bai 4"
            onClicked:
            {
                label.text = "doi do C,F";
                openMenu.text= "bai 4";
                txtText4.visible=true;
                kqbai6.visible=true;
                nhap.visible=true;
                xuat.visible=true;
                select.visible=true;
                txtText2.visible=false;
                kqbai3.visible=false;
                txtText1.visible=false;
                kqbai2.visible=false;
                txtText.visible=false;
                kqbai1.visible=false;
                txtText5.visible=false;
                kqbai5.visible=false;
                txtText7.visible=false;
                kqbai7.visible=false;

            }
        }
        MenuItem
        {
            text: "bai 5"
            onClicked:
            {
                label.text = "tim ki tu truoc va sau";
                openMenu.text= "bai 5";
                txtText5.visible=true;
                kqbai5.visible=true;
                nhap.visible=true;
                xuat.visible=true;
                select.visible=false;
                txtText2.visible=false;
                kqbai3.visible=false;
                txtText1.visible=false;
                kqbai2.visible=false;
                txtText.visible=false;
                kqbai1.visible=false;
                txtText4.visible=false;
                kqbai6.visible=false;
                txtText7.visible=false;
                kqbai7.visible=false;
            }
        }
        MenuItem
        {
            text: "bai 7"
            onClicked:
            {
                label.text = "kiem tra nguyen am, phu am";
                openMenu.text= "bai 7";
                txtText7.visible=true;
                kqbai7.visible=true;
                nhap.visible=true;
                xuat.visible=true;
                select.visible=false;
                txtText2.visible=false;
                kqbai3.visible=false;
                txtText1.visible=false;
                kqbai2.visible=false;
                txtText.visible=false;
                kqbai1.visible=false;
                txtText4.visible=false;
                kqbai6.visible=false;
                txtText5.visible=false;
                kqbai5.visible=false;
            }
        }
    }
   Text
   {
       id: nhap
       x: 50
       y: 115
       text: "Moi ban nhap du lieu"
        font.pointSize: 20
        visible: false
   }
   Text
   {
       visible: false
       id: xuat
       x: 400
       y: 265
       text: "KET QUA"
       font.pointSize: 20
   }

     TextField
        {
            id: txtText
            text: idBai4.day
            x:50
            width: 250
            y:150
            height: 50
            visible: false
            placeholderText: qsTr("High On Life")
            onTextChanged:
            {
                for(i=0;i<txtText.length;i++)
                {
                if(Number(txtText.text[i]>=0)&&Number(txtText.text[i]<=9))
                 {
                 var result = ""
                 result =result+ parseInt(idBai4.nam(Number(txtText.text))) + " nam "
                 +  parseInt(idBai4.thang(Number(txtText.text)))+ " thang "
                 + parseInt(idBai4.ngay(Number(txtText.text)))+" ngay "
                 kqText.text = result.toString()
                 }
                 else
                  {
                      kqText.text="error";
                      break;
                  }
                }
            }
        }

    Rectangle
    {
        id: kqbai1
        y: 300
        height: 40
        x: 400
        width: 200
        visible: false
        border.color: "black"
        border.width: 3
        TextField
        {
            id: kqText
            text: txtText.text
            y:310
            width: 200
            anchors.fill: parent
        }
    }
    TextField
       {
           id: txtText1
           text: idBai43.n
           x:50
           width: 250
           y:150
           height: 50
           visible: false
           placeholderText: qsTr("High On Life")
    onTextChanged: {
        for(i=0;i<txtText1.length;i++)
        {
            if(Number(txtText1.text[i]>=0)&&Number(txtText1.text[i]<=9))
            {
                var result1 = ""
                for(j=0; j < parseInt(txtText1.text); j++)
                {
                    result1 += parseInt(idBai43.convert(j)) + " "
                }
                kqText1.text = result1.toString()
            }
            else
            {
                kqText1.text="error";
                break;
            }
        }
    }
}
    Rectangle
    {

        id: kqbai2
        y: 300
        height: 40
        x: 400
        width: 200
        visible: false
        border.color: "black"
        border.width: 3
        TextField
        {
            id: kqText1
            text: txtText1.text
            y:310
            width: 200
            anchors.fill: parent

        }
    }
    TextField
       {
           id: txtText2
           text: idBai44.y
           x:50
           width: 250
           y:150
           height: 50
           visible: false
    onTextChanged: {
        kqText2.text= idBai44.test(txtText2.text);

            }
        }
    Rectangle
    {
        id: kqbai3
        y: 300
        height: 40
        x: 400
        width: 200
        visible: false
        border.color: "black"
        border.width: 3
        TextField
        {
            id: kqText2
            text: txtText2.text
            y:310
            width: 200
            anchors.fill: parent

        }
    }
    TextField
       {
           id: select
           placeholderText: qsTr("your select C or F")
           x:80
           width: 250
           y:250
           height: 50
           visible: false

        }
    TextField
    {
        id: txtText4
        placeholderText: qsTr("High On Life")
        text: idBai46.doC
        x:50
        width: 250
        y:150
        height: 50
        visible: false
        onTextChanged:
        {         
           kqText4.text=idBai46.convert(select.text,txtText4.text)
        }

       }


    Rectangle
    {
        id: kqbai6
        y: 300
        height: 40
        x: 400
        width: 200
        visible: false
        border.color: "black"
        border.width: 3
        TextField
        {
            id: kqText4
            text: txtText4.text
            y:310
            width: 200
            anchors.fill: parent

        }
    }
    TextField
    {
        id: txtText5
        placeholderText: qsTr("High On Life")
        text: idBai45.kitu
        x:50
        width: 250
        y:150
        height: 50
        visible: false
        onTextChanged:
        {
          kqText5.text=idBai45.convert(txtText5.text)
        }
       }
    Rectangle
    {
        id: kqbai5
        y: 300
        height: 40
        x: 400
        width: 200
        visible: false
        border.color: "black"
        border.width: 3
        TextField
        {
            id: kqText5
            text: txtText5.text
            y:310
            width: 200
            anchors.fill: parent
        }
    }
    TextField
    {
        id: txtText7
        x:50
        width: 250
        y:150
        height: 50
        visible: false
        placeholderText: qsTr("High On Life")
        onTextChanged:
        {
          kqText7.text=idBai47.convert(txtText7.text)
        }
       }
    Rectangle
    {
        id: kqbai7
        y: 300
        height: 40
        x: 400
        width: 200
        visible: false
        border.color: "black"
        border.width: 3
        TextField
        {
            id: kqText7
//            text: txtText7.text
            y:310
            width: 200
            anchors.fill: parent

        }
    }
}
