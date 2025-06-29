<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>input.jsp</title>

<link rel="stylesheet" href="layout.css">
<style>
* { margin: 0; padding: 0; box-sizing: border-box; }
body { font-family: Arial, sans-serif; }
	#login_button{
		text-align:center;
		font-weight:bold;		
	}
</style>

<%
	String stitle = request.getParameter("제목");
	String swriter = request.getParameter("작성자");
	String stext = request.getParameter("내용");
	String spwd = request.getParameter("등록 비밀번호");
	String simportant = request.getParameter("중요도");
	String scolor = request.getParameter("색상");
	
%>

<script>
window.onload = function(){
	let obj = document.getElementById("tb");
	obj.setAttribute("style", "background-color: <%=scolor %>;");
	
	let importantCheckbox = document.getElementById("중요도");
    if ("<%=simportant%>" === "on") {
        importantCheckbox.checked = true;
    } else {
        importantCheckbox.checked = false;
    }
    importantCheckbox.setAttribute("disabled", "true");
}

</script>

</head>



<body>

    <header>
        게시판 제작중
    </header>
    
    
    <nav>
    	<ul>
    		<li><a href="home.html">home</a></li>
    		<li><a href="entire.html">전체 글 보기</a></li>
    		<li><a href="board.html">게시판 이름1</a></li>
    		<li><a href="board.html">게시판 이름2</a></li>  		
    	</ul>
    </nav>
    
    
    <section>
    	<div class="board_title">
    		<h1>게시판 이름</h1>
    			<form style="padding-left:10px">
    			아이디: <input type="text" name="아이디" value="id">
    			비밀번호: <input type="password" name="비밀번호" value="pwd">
    			<button id="login_button" type="submit" >로그인</button>
    			</form>
    	</div>    			
    	<hr> 			
    	<hr>
    	<div  class="input_form">
    	    <form action="input.jsp" method="post">
    		<table id="tb">
    			<tr>
    				<th>제목: </th>
    				<td><input type="text" name="제목" value="<%=stitle %>" disabled></td>
    			</tr> 
    			<tr>
    				<th>작성자: </th>
    				<td><input type="text" name="작성자" value="<%=swriter %>" disabled></td>
    			</tr>
    			<tr>
    				<th>내용: </th>
    				<td><textarea rows="15" cols="60" name="내용" placeholder="<%=stext %>" disabled></textarea></td>
    			</tr>
    			<tr>
    				<th>비밀번호: </th>
    				<td><input style="width:70%;" type="text" name="등록 비밀번호" value="<%=spwd %>" disabled></td>
    			</tr>
    			<tr>
    				<th>중요여부: </th>
    				<td style="position:relative;right:200px"><input type="checkbox" name="중요도" id="중요도"></td>
    			</tr>
    			<tr>
    				<th>메모 색상: </th>
    				<td><input style="width:30px" type="color" name="색상" disabled></td>
    			</tr>
    			<tr>
    				<th>그림첨부: </th>
    				<td><input type="file" name="그림" accept="image/*"></td>
    			</tr>
    			    			
    		</table>
    		</form>
    	</div>
    	
    </section>
    
    <footer>
    	<h1></h1>
    </footer>

</body>
</html>