import QtQuick 2.0
import QtQuick.Controls 1.2
import QtQuick.Controls.Styles 1.1



Item {
    property  alias str:btn.text;
    property alias wid: btn.width
    property alias hei: btn.height
    Button {
        id: btn
        text: "MyButton"
        width: 70
        height: 30
        style: ButtonStyle {
            background:
            Rectangle {
                id: rec
                color: "lightyellow"
                border.color: "red"
                border.width: btn.pressed? 1:0
            }
        }
    }
}
