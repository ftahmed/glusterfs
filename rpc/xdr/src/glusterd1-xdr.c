/*
  Copyright (c) 2010 Gluster, Inc. <http://www.gluster.com>
  This file is part of GlusterFS.

  GlusterFS is free software; you can redistribute it and/or modify
  it under the terms of the GNU Affero General Public License as published
  by the Free Software Foundation; either version 3 of the License,
  or (at your option) any later version.

  GlusterFS is distributed in the hope that it will be useful, but
  WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Affero General Public License for more details.

  You should have received a copy of the GNU Affero General Public License
  along with this program.  If not, see
  <http://www.gnu.org/licenses/>.
*/

/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "glusterd1.h"
#include "compat.h"

bool_t
xdr_glusterd_volume_status (XDR *xdrs, glusterd_volume_status *objp)
{

	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_gd1_mgmt_probe_req (XDR *xdrs, gd1_mgmt_probe_req *objp)
{

	 if (!xdr_vector (xdrs, (char *)objp->uuid, 16,
		sizeof (u_char), (xdrproc_t) xdr_u_char))
		 return FALSE;
	 if (!xdr_string (xdrs, &objp->hostname, ~0))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->port))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_gd1_mgmt_probe_rsp (XDR *xdrs, gd1_mgmt_probe_rsp *objp)
{

	 if (!xdr_vector (xdrs, (char *)objp->uuid, 16,
		sizeof (u_char), (xdrproc_t) xdr_u_char))
		 return FALSE;
	 if (!xdr_string (xdrs, &objp->hostname, ~0))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->port))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->op_ret))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->op_errno))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_gd1_mgmt_friend_req (XDR *xdrs, gd1_mgmt_friend_req *objp)
{

	 if (!xdr_vector (xdrs, (char *)objp->uuid, 16,
		sizeof (u_char), (xdrproc_t) xdr_u_char))
		 return FALSE;
	 if (!xdr_string (xdrs, &objp->hostname, ~0))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->port))
		 return FALSE;
	 if (!xdr_bytes (xdrs, (char **)&objp->vols.vols_val, (u_int *) &objp->vols.vols_len, ~0))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_gd1_mgmt_friend_rsp (XDR *xdrs, gd1_mgmt_friend_rsp *objp)
{

	 if (!xdr_vector (xdrs, (char *)objp->uuid, 16,
		sizeof (u_char), (xdrproc_t) xdr_u_char))
		 return FALSE;
	 if (!xdr_string (xdrs, &objp->hostname, ~0))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->op_ret))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->op_errno))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->port))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_gd1_mgmt_unfriend_req (XDR *xdrs, gd1_mgmt_unfriend_req *objp)
{

	 if (!xdr_vector (xdrs, (char *)objp->uuid, 16,
		sizeof (u_char), (xdrproc_t) xdr_u_char))
		 return FALSE;
	 if (!xdr_string (xdrs, &objp->hostname, ~0))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->port))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_gd1_mgmt_unfriend_rsp (XDR *xdrs, gd1_mgmt_unfriend_rsp *objp)
{

	 if (!xdr_vector (xdrs, (char *)objp->uuid, 16,
		sizeof (u_char), (xdrproc_t) xdr_u_char))
		 return FALSE;
	 if (!xdr_string (xdrs, &objp->hostname, ~0))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->op_ret))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->op_errno))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->port))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_gd1_mgmt_cluster_lock_req (XDR *xdrs, gd1_mgmt_cluster_lock_req *objp)
{

	 if (!xdr_vector (xdrs, (char *)objp->uuid, 16,
		sizeof (u_char), (xdrproc_t) xdr_u_char))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_gd1_mgmt_cluster_lock_rsp (XDR *xdrs, gd1_mgmt_cluster_lock_rsp *objp)
{

	 if (!xdr_vector (xdrs, (char *)objp->uuid, 16,
		sizeof (u_char), (xdrproc_t) xdr_u_char))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->op_ret))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->op_errno))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_gd1_mgmt_cluster_unlock_req (XDR *xdrs, gd1_mgmt_cluster_unlock_req *objp)
{

	 if (!xdr_vector (xdrs, (char *)objp->uuid, 16,
		sizeof (u_char), (xdrproc_t) xdr_u_char))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_gd1_mgmt_cluster_unlock_rsp (XDR *xdrs, gd1_mgmt_cluster_unlock_rsp *objp)
{

	 if (!xdr_vector (xdrs, (char *)objp->uuid, 16,
		sizeof (u_char), (xdrproc_t) xdr_u_char))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->op_ret))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->op_errno))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_gd1_mgmt_stage_op_req (XDR *xdrs, gd1_mgmt_stage_op_req *objp)
{

	 if (!xdr_vector (xdrs, (char *)objp->uuid, 16,
		sizeof (u_char), (xdrproc_t) xdr_u_char))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->op))
		 return FALSE;
	 if (!xdr_bytes (xdrs, (char **)&objp->buf.buf_val, (u_int *) &objp->buf.buf_len, ~0))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_gd1_mgmt_stage_op_rsp (XDR *xdrs, gd1_mgmt_stage_op_rsp *objp)
{

        register int32_t *buf;

	if (xdrs->x_op == XDR_ENCODE) {
		 if (!xdr_vector (xdrs, (char *)objp->uuid, 16,
			sizeof (u_char), (xdrproc_t) xdr_u_char))
			 return FALSE;
		buf = XDR_INLINE (xdrs, 3 * BYTES_PER_XDR_UNIT);
		if (buf == NULL) {
			 if (!xdr_int (xdrs, &objp->op))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->op_ret))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->op_errno))
				 return FALSE;

		} else {
		IXDR_PUT_LONG(buf, objp->op);
		IXDR_PUT_LONG(buf, objp->op_ret);
		IXDR_PUT_LONG(buf, objp->op_errno);
		}
		 if (!xdr_string (xdrs, &objp->op_errstr, ~0))
			 return FALSE;
		 if (!xdr_bytes (xdrs, (char **)&objp->dict.dict_val, (u_int *) &objp->dict.dict_len, ~0))
			 return FALSE;
		return TRUE;
	} else if (xdrs->x_op == XDR_DECODE) {
		 if (!xdr_vector (xdrs, (char *)objp->uuid, 16,
			sizeof (u_char), (xdrproc_t) xdr_u_char))
			 return FALSE;
		buf = XDR_INLINE (xdrs, 3 * BYTES_PER_XDR_UNIT);
		if (buf == NULL) {
			 if (!xdr_int (xdrs, &objp->op))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->op_ret))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->op_errno))
				 return FALSE;

		} else {
		objp->op = IXDR_GET_LONG(buf);
		objp->op_ret = IXDR_GET_LONG(buf);
		objp->op_errno = IXDR_GET_LONG(buf);
		}
		 if (!xdr_string (xdrs, &objp->op_errstr, ~0))
			 return FALSE;
		 if (!xdr_bytes (xdrs, (char **)&objp->dict.dict_val, (u_int *) &objp->dict.dict_len, ~0))
			 return FALSE;
	 return TRUE;
	}

	 if (!xdr_vector (xdrs, (char *)objp->uuid, 16,
		sizeof (u_char), (xdrproc_t) xdr_u_char))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->op))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->op_ret))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->op_errno))
		 return FALSE;
	 if (!xdr_string (xdrs, &objp->op_errstr, ~0))
		 return FALSE;
	 if (!xdr_bytes (xdrs, (char **)&objp->dict.dict_val, (u_int *) &objp->dict.dict_len, ~0))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_gd1_mgmt_commit_op_req (XDR *xdrs, gd1_mgmt_commit_op_req *objp)
{

	 if (!xdr_vector (xdrs, (char *)objp->uuid, 16,
		sizeof (u_char), (xdrproc_t) xdr_u_char))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->op))
		 return FALSE;
	 if (!xdr_bytes (xdrs, (char **)&objp->buf.buf_val, (u_int *) &objp->buf.buf_len, ~0))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_gd1_mgmt_commit_op_rsp (XDR *xdrs, gd1_mgmt_commit_op_rsp *objp)
{
	register int32_t *buf;


	if (xdrs->x_op == XDR_ENCODE) {
		 if (!xdr_vector (xdrs, (char *)objp->uuid, 16,
			sizeof (u_char), (xdrproc_t) xdr_u_char))
			 return FALSE;
		buf = XDR_INLINE (xdrs, 3 * BYTES_PER_XDR_UNIT);
		if (buf == NULL) {
			 if (!xdr_int (xdrs, &objp->op))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->op_ret))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->op_errno))
				 return FALSE;

		} else {
		IXDR_PUT_LONG(buf, objp->op);
		IXDR_PUT_LONG(buf, objp->op_ret);
		IXDR_PUT_LONG(buf, objp->op_errno);
		}
		 if (!xdr_bytes (xdrs, (char **)&objp->dict.dict_val, (u_int *) &objp->dict.dict_len, ~0))
			 return FALSE;
		 if (!xdr_string (xdrs, &objp->op_errstr, ~0))
			 return FALSE;
		return TRUE;
	} else if (xdrs->x_op == XDR_DECODE) {
		 if (!xdr_vector (xdrs, (char *)objp->uuid, 16,
			sizeof (u_char), (xdrproc_t) xdr_u_char))
			 return FALSE;
		buf = XDR_INLINE (xdrs, 3 * BYTES_PER_XDR_UNIT);
		if (buf == NULL) {
			 if (!xdr_int (xdrs, &objp->op))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->op_ret))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->op_errno))
				 return FALSE;

		} else {
		objp->op = IXDR_GET_LONG(buf);
		objp->op_ret = IXDR_GET_LONG(buf);
		objp->op_errno = IXDR_GET_LONG(buf);
		}
		 if (!xdr_bytes (xdrs, (char **)&objp->dict.dict_val, (u_int *) &objp->dict.dict_len, ~0))
			 return FALSE;
		 if (!xdr_string (xdrs, &objp->op_errstr, ~0))
			 return FALSE;
	 return TRUE;
	}

	 if (!xdr_vector (xdrs, (char *)objp->uuid, 16,
		sizeof (u_char), (xdrproc_t) xdr_u_char))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->op))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->op_ret))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->op_errno))
		 return FALSE;
	 if (!xdr_bytes (xdrs, (char **)&objp->dict.dict_val, (u_int *) &objp->dict.dict_len, ~0))
		 return FALSE;
	 if (!xdr_string (xdrs, &objp->op_errstr, ~0))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_gd1_mgmt_friend_update (XDR *xdrs, gd1_mgmt_friend_update *objp)
{

	 if (!xdr_vector (xdrs, (char *)objp->uuid, 16,
		sizeof (u_char), (xdrproc_t) xdr_u_char))
		 return FALSE;
	 if (!xdr_bytes (xdrs, (char **)&objp->friends.friends_val, (u_int *) &objp->friends.friends_len, ~0))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->port))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_gd1_mgmt_friend_update_rsp (XDR *xdrs, gd1_mgmt_friend_update_rsp *objp)
{

	 if (!xdr_vector (xdrs, (char *)objp->uuid, 16,
		sizeof (u_char), (xdrproc_t) xdr_u_char))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->op))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->op_ret))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->op_errno))
		 return FALSE;
	return TRUE;
}
