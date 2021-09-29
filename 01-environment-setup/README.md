<h2 align="center"> 
Thiết lập môi trường lập trình C/C++
</h2>

### [Các bước viết chương trình](#programmingsteps)
### [Môi trường phát triển tích hợp](#ides)

### [Dev-C++](https://www.bloodshed.net/)
#### Đặc điểm
- Dev-C++ được ưa chuộng hàng đầu trong dạy/học lập trình C/C++ bởi: mã nguồn mở (open-source), rất gọn nhẹ và đủ tính năng cơ bản;
- Hỗ trợ một số trình biên dịch khác nhau (như [MingW](https://www.mingw-w64.org/), [Cygwin](http://cygwin.com/));
- Chỉ chạy trên Windows.
#### Cài đặt
##### [Tải nguồn cài đặt Dev-C++](https://sourceforge.net/projects/orwelldevcpp/files/latest/download)
##### Cài đặt Dev-C++
- Chạy file `Dev-Cpp 5.11 TDM-GCC 4.9.2 Setup.exe` vừa tải xuống để bắt đầu cài đặt.

- **License Agreement**: chọn `Agree`.
<img src="figs/devcpp-install-01.PNG">

- **Choose Components**: nên chọn mặc định (Full) để cài đầy đủ các thành phần. Nếu đã từng cài Dev-C++ trước đó, nên chọn thêm "Remove old configuration files" để gỡ bỏ các thiết lập cũ.<br>
Chọn **Next**.
<img src="figs/devcpp-install-02.PNG">

- **Choose Install Location**: chọn vị trí cài đặt trên ổ đĩa. 
Nhấn **Install**.
<img src="figs/devcpp-install-03.PNG">

- Nhấn **Finish** để hoàn tất cài đặt.
<img src="figs/devcpp-install-04.PNG">

#### Sử dụng Dev-C++
Viết chương trình in ra màn hình dòng chữ "Hello World!".
- Khởi động Dev-C++
<img src="figs/devcpp-install-05.PNG">
Khi chạy lần đầu, Dev-C++ yêu cầu chọn lựa về ngôn ngữ, theme (các thiết lập về font chữ, màu sắc và các biểu tượng). Hãy chọn thiết lập mặc định và nhấn **OK** để hoàn tất.
- Tạo file mã nguồn 
Chọn **File->New->Source File**, hoặc nhấn tổ hợp phím **Ctrl+N**, hoặc chọn biểu tượng **New** ở thanh công cụ chính.
<img src="figs/devcpp-install-06.PNG">

- Viết chương trình (Edit)

Ở màn hình soạn thảo, nhập đoạn mã lệnh sau:
```c
// The first C program: print "Hello World" message

#include <stdio.h>

int main()
{
	printf("Hello World!");
}
```
Chọn **File->Save**, hoặc nhấn **Ctrl+S** để lưu lại file mã nguồn. Nên đặt tên file có ý nghĩa, chẳng hạn `helloworld.c`
<img src="figs/devcpp-install-08.PNG">

- Biên dịch (Compile)

Chọn **Excecute->Compile**, hoặc nhấn **F9**, hoặc nhấn biểu tượng **Compile** trên thanh công cụ.
<img src="figs/devcpp-install-09.PNG">

Cửa sổ **Compiler Log** hiện kết quả biên dịch.


### CLion
#### Đặc điểm
#### Cài đặt
#### Sử dụng

### Visual Studio Code
#### Đặc điểm
#### Cài đặt
#### Sử dụng

### Eclipse
#### Đặc điểm
#### Cài đặt
#### Sử dụng

### Code::Blocks
#### Đặc điểm
#### Cài đặt
#### Sử dụng

### XCode
#### Đặc điểm
#### Cài đặt
#### Sử dụng


### [Tham khảo](References.md)
