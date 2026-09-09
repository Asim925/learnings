import React from "react";
import UserTable from "../UserTable";
import Link from "next/link";

interface Props {
  searchParams: {
    sortOrder: string;
  };
}

const UsersPage = async ({ searchParams: { sortOrder } }: Props) => {
  return (
    <div>
      <Link href="/users/new" className="btn">
        New User{" "}
      </Link>
      <h1>Users</h1>
      {/* <Suspense fallback={<p>your content is loading...</p>}> */}
      <UserTable sortOrder={sortOrder} />
      {/* </Suspense> */}
    </div>
  );
};

export default UsersPage;
