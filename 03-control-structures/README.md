<h2 align="center"> 
Các cấu trúc điều khiển
</h2>


<div class="header">
<h3>Cấu trúc tuần tự (sequence)</h3>
<h3>Cấu trúc rẽ nhánh (selection)</h3>
<ul>
    <li><h4>Câu lệnh <b>if</b></h4></li>
    <li><h4>Câu lệnh <b>switch</b></h4></li>
</ul>

<h3>Cấu trúc lặp (repetition)</h3>
<ul>
    <li><h4>Lệnh <b>for</b></h4></li>
    <li><h4>Lệnh <b>while</b></h4></li>
    <li><h4>Lệnh <b>do ... while</b></h4></li>
</ul>
</div>

## Cấu trúc tuần tự (sequence)

- Đặt các câu lệnh theo thứ tự cần thực hiện.

<img src="figs/sequence.png" width="20%">

## Cấu trúc rẽ nhánh (selection)

### Câu lệnh **if**

#### Dạng 1

<img src="figs/if1.png" width="40%">

```c
if(<Biểu thức logic>)
    {
        // Khối lệnh được thực thi khi <Biểu thức logic> có giá trị đúng
    }
```

Ví dụ:
```c
int a = 36;
if(a % 2 == 0) printf("%d la so chan\n", a);
```

#### Dạng 2

<img src="figs/if2.png" width="55%">

```c
if(<Biểu thức logic>)
    {
        // Khối lệnh 1 được thực thi khi <Biểu thức logic> có giá trị đúng
    };
else
    {
        // Khối lệnh 2 được thực thi khi <Biểu thức logic> có giá trị sai
    }
```

Ví dụ:
```c
int a = 36;
if(a % 2 == 0) printf("%d la so chan\n", a);
else printf("%d la so le\n", a);
```