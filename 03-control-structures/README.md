<h2 align="center"> 
Các cấu trúc điều khiển
</h2>


<div class="header">
<h3>Câu lệnh điều khiển rẽ nhánh (selection)</h3>
<ul>
    <li><h4>Câu lệnh <b>if</b></h4></li>
    <li><h4>Câu lệnh <b>switch</b></h4></li>
</ul>

<h3>Câu lệnh lặp (repetition)</h3>
<ul>
    <li><h4>Lệnh <b>for</b></h4></li>
    <li><h4>Lệnh <b>while</b></h4></li>
    <li><h4>Lệnh <b>do ... while</b></h4></li>
</ul>
</div>


## Câu lệnh điều khiển rẽ nhánh **if**

### Dạng 1

<img src="figs/if1.png" width="40%">

```c
// Chỉ thực hiện 1 lệnh khi <Biểu thức logic> đúng
if(condition)
    <Lệnh>; 
```

```c
// Thực hiện nhiều lệnh khi <Biểu thức logic> đúng
if(condition)
    {
        <Lệnh 1>; 
        <Lệnh 2>;
    }
```

### Dạng 2

<img src="figs/if2.png" width="55%">

```c
if(condition)
    <Lệnh 1>; 
else
    <Lệnh 2>;
```

