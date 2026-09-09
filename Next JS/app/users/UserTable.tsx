import Link from "next/link";
import React from "react";

interface User {
  id: number;
  name: string;
  email: string;
}

interface Props {
  sortOrder: string;
}

const UserTable = async ({ sortOrder }: Props) => {
  const res = await fetch("https://jsonplaceholder.typicode.com/users", {
    next: { revalidate: 10 },
  });
  const users: User[] = await res.json();

  sortOrder === "Name"
    ? users.sort((a, b) => a.name.localeCompare(b.name))
    : users.sort((a, b) => a.email.localeCompare(b.email));
  return (
    <table className="table table-ordered w-2">
      <thead>
        <tr>
          <th>
            <Link href="?sortOrder=Name">Name</Link>
          </th>
          <th>
            <Link href="?sortOrder=Email">Email</Link>
          </th>
        </tr>
      </thead>
      <tbody>
        {users.map((user) => (
          <tr key={user.id}>
            <td>{user.name}</td>
            <td>{user.email}</td>
          </tr>
        ))}
      </tbody>
    </table>
  );
};

export default UserTable;
