<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<%
String sid = request.getParameter("id");
String sname = request.getParameter("name");
String spwd = request.getParameter("pwd");
String sfoods[] = request.getParameterValues("foods");
String sjob[] = request.getParameterValues("job");
%>  
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>회원가입</title>
<script>
window.onload = function(){
	var foodarr = document.getElementsByName("foods");
	
	//클라이언트에서 받은 sfood 배열의 문자열 확인
	
	
	<%for(int i=0;i<3;i++){
	int idx = -1;
	if(sfoods[i].equals("사과")) idx = 0;
	if(sfoods[i].equals("바나나")) idx = 1;
	if(sfoods[i].equals("포도")) idx = 2;
	%>
	foodarr[<%=idx%>].checked=true;
	
	<%}%> //end of for
	
	
	document.getElementById("job").selectedIndex = <%=sjob%>;
	
}
</script>

</head>
<body>
<form action="" method="post">
<table>
<tr>
	<td>아이디</td>
	<td>
		<input type="text" name="id" value="<%=sid %>" readonly disabled>
	</td>
</tr>
<tr>
	<td>성명</td>
	<td>
		<input type="text" name="name" value="<%=sname %>" disabled>
	</td>
</tr>
<tr>
	<td>암호</td>
	<td>
		<input type="text" name="pwd" value="<%=spwd %>" disabled>
	</td>
</tr>
<tr>
	<th>음식</th>
	<td>		
		<input type="checkbox" name="foods"	value="사과" disabled>사과
		<input type="checkbox" name="foods" value="바나나" disabled>바나나
		<input type="checkbox" name="foods" value="포도" disabled>포도		
	</td>
</tr>
<tr>
	<th>직업</th>
	<td>
		<select name="job" id="job">
		<option value="0">컴퓨터기사</option>
		<option value="1">요리사</option>
		<option value="2">프로게이머</option>
		<option value="3">학생</option>
		</select>
	</td>
</tr>
<tr>

</table>
</form>
</body>
</html>