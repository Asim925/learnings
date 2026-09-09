import Link from "next/link";
import React from "react";

const Page = () => {
  return (
    <div>
      <div>
        <h1 className="text-2xl font-bold">Main Content</h1>
        <p>
          This is the main content area. The sidebar is fixed, so this area
          scrolls normally.
        </p>
        <Link href="admin/mainAdmin">
          <strong>Click here for the main Admin</strong>
        </Link>
      </div>
    </div>
  );
};

export default Page;
