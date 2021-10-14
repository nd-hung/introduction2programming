<h2 align="center"> 
Các cấu trúc điều khiển
</h2>


<div class="header">
<h3>Câu lệnh điều khiển rẽ nhánh (selection)</h3>
<ul>
    <li><h4>Câu lệnh <b>if</b></h4></li>
    <li><h4>Câu lệnh <b>switch</b></h4></li>
</ul>

<h3>Câu lệnh lặp (Repetition)</h3>
<ul>
    <li><h4>Lệnh <b>for</b></h4></li>
    <li><h4>Lệnh <b>while</b></h4></li>
    <li><h4>Lệnh <b>do ... while</b></h4></li>
</ul>
</div>


## Câu lệnh điều khiển rẽ nhánh **if**

### Dạng 1
<img src="figs/if1.png" width="50%">

```c
// Chỉ thực hiện 1 lệnh khi <Biểu thức logic> đúng
if(<Biểu_thức_logic>)
    <Lệnh>; 
```

```c
// Thực hiện nhiều lệnh khi <Biểu thức logic> đúng
if(<Biểu_thức_logic>)
    {
        <Lệnh_1>; 
        <Lệnh_2>;
    }
```

### Dạng 2
<img src="figs/if2.png" width="50%">

```c
if(<Biểu_thức_logic>)
    <Lệnh_1>; 
else
    <Lệnh_2>;
```

