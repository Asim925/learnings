import React from "react";

interface Comment {
  postId: number;
  id: number;
  name: string;
  email: string;
  body: string;
}

const Comments = async () => {
  const respose = await fetch("https://jsonplaceholder.typicode.com/comments");
  const comments: Comment[] = await respose.json();

  return (
    <div>
      {comments.map((comment) => (
        <p>
          {comment.id}- {comment.body}
        </p>
      ))}
    </div>
  );
};

export default Comments;
