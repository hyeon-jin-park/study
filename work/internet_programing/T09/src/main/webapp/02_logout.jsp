<%@ page contentType="text/html; charset=UTF-8"  %>
<!DOCTYPE html>
<%
session.invalidate();
%>

<script>
alert("로그아웃되었습니다. ");
location.href="02_login.jsp";
</script>
